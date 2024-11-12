/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:42:28 by lagea             #+#    #+#             */
/*   Updated: 2024/11/12 17:29:08 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

timestamp_t get_timestamp()
{
	struct timeval now;
	gettimeofday (&now, NULL);
	return  now.tv_usec + (timestamp_t)now.tv_sec * 1000000;
}

/*=============================================================================*/
/*==================================LIST======================================*/
/*=============================================================================*/

void displayList(std::list<int> &lst)
{
    std::list<int>::iterator it = lst.begin();
    for (; it != lst.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

// Advance the iterator by n positions
std::list<int>::iterator advanceIterator(std::list<int>::iterator it, int n)
{
    while (n-- > 0 && it != std::list<int>::iterator()) 
    {
        ++it;
    }
    return it;
}

std::list<int>::iterator binarySearch(std::list<int> &lst, int value)
{
    int left = 0;
    int right = lst.size();
    std::list<int>::iterator leftIt = lst.begin();

    while (left < right) 
    {
        int middle = left + (right - left) / 2;
        std::list<int>::iterator middleIt = advanceIterator(leftIt, middle - left);

        if (*middleIt < value) 
        {
            left = middle + 1;
            leftIt = ++middleIt;
        } 
        else 
        {
            right = middle;
        }
    }

    return leftIt;
}

std::list<int> merge(const std::list<int> &left, const std::list<int> &right)
{
    std::list<int> result;
    std::list<int>::const_iterator itLeft = left.begin();
    std::list<int>::const_iterator itRight = right.begin();

    while (itLeft != left.end() && itRight != right.end()) 
    {
        if (*itLeft < *itRight) 
        {
            result.push_back(*itLeft);
            ++itLeft;
        } 
        else 
        {
            result.push_back(*itRight);
            ++itRight;
        }
    }

    while (itLeft != left.end()) 
    {
        result.push_back(*itLeft);
        ++itLeft;
    }
    while (itRight != right.end()) 
    {
        result.push_back(*itRight);
        ++itRight;
    }

    return result;
}

std::list<int> mergeSort(const std::list<int>& inputList) 
{
    if (inputList.size() <= 1) 
    {
        return inputList;
    }

    std::list<int>::const_iterator middle = inputList.begin();
    std::advance(middle, inputList.size() / 2);

    std::list<int> left(inputList.begin(), middle);
    std::list<int> right(middle, inputList.end());

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}

std::list<int> pMergeSortList(std::list<int> &lst)
{
    int straggler = -1;
    if (lst.size() % 2 != 0)
    {
        straggler = lst.back();
        lst.pop_back();
    }
    
    std::list<int>::iterator it, it2;
    for (it = lst.begin(); it != lst.end();it++)
    {
        it2 = it;
        it2++;
        if (*it > *it2)
            std::swap(*it, *it2);
        it++;
    }
    
    std::list<int> leftNumbers;
    std::list<int> rightNumbers;
    it = lst.begin(); 
    while (it != lst.end()) 
    {
        int left = *it++;
        int right = *it++;
        leftNumbers.push_back(left);
        rightNumbers.push_back(right);
    }

    rightNumbers = mergeSort(rightNumbers);
    rightNumbers.push_front(leftNumbers.front());
    leftNumbers.pop_front();

    for (int i = leftNumbers.size(); i > 0; i--)
    {
        it = leftNumbers.begin();
        int temp = *it;
        it = binarySearch(rightNumbers, *it);
        rightNumbers.insert(it, temp);
        leftNumbers.pop_front();
    }

    if (straggler != -1)
    {
        it = binarySearch(rightNumbers, straggler);
        rightNumbers.insert(it, straggler);
    }

    lst.clear();
    lst = rightNumbers;
    return lst;
}

/*=============================================================================*/
/*==================================DEQUE======================================*/
/*=============================================================================*/

void displayDeque(std::deque<int> &deq)
{
    for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

std::deque<int>::iterator binarySearch(std::deque<int> &deq, int value)
{
    return std::lower_bound(deq.begin(), deq.end(), value);
}

std::deque<int> merge(const std::deque<int> &left, const std::deque<int> &right)
{
    std::deque<int> result;
    std::deque<int>::const_iterator itLeft = left.begin();
    std::deque<int>::const_iterator itRight = right.begin();

    while (itLeft != left.end() && itRight != right.end())
    {
        if (*itLeft < *itRight)
        {
            result.push_back(*itLeft);
            ++itLeft;
        }
        else
        {
            result.push_back(*itRight);
            ++itRight;
        }
    }

    result.insert(result.end(), itLeft, left.end());
    result.insert(result.end(), itRight, right.end());

    return result;
}

std::deque<int> mergeSort(const std::deque<int>& inputDeque)
{
    if (inputDeque.size() <= 1)
    {
        return inputDeque;
    }

    size_t middleIndex = inputDeque.size() / 2;
    std::deque<int> left(inputDeque.begin(), inputDeque.begin() + middleIndex);
    std::deque<int> right(inputDeque.begin() + middleIndex, inputDeque.end());

    left = mergeSort(left);
    right = mergeSort(right);

    return merge(left, right);
}

std::deque<int> pMergeSortDeque(std::deque<int> &deq)
{
    int straggler = -1;
    if (deq.size() % 2 != 0)
    {
        straggler = deq.back();
        deq.pop_back();
    }

    for (size_t i = 0; i < deq.size(); i += 2)
    {
        if (deq[i] > deq[i + 1])
            std::swap(deq[i], deq[i + 1]);
    }

    std::deque<int> leftNumbers;
    std::deque<int> rightNumbers;
    for (size_t i = 0; i < deq.size(); i += 2)
    {
        leftNumbers.push_back(deq[i]);
        rightNumbers.push_back(deq[i + 1]);
    }

    rightNumbers = mergeSort(rightNumbers);

    if (!leftNumbers.empty())
    {
        rightNumbers.push_front(leftNumbers.front());
        leftNumbers.pop_front();
    }

    for (size_t i = 0; i < leftNumbers.size(); ++i)
    {
        std::deque<int>::iterator it = binarySearch(rightNumbers, leftNumbers[i]);
        rightNumbers.insert(it, leftNumbers[i]);
    }

    if (straggler != -1)
    {
        std::deque<int>::iterator it = binarySearch(rightNumbers, straggler);
        rightNumbers.insert(it, straggler);
    }

    deq.clear();
    deq = rightNumbers;
    return rightNumbers;
}
