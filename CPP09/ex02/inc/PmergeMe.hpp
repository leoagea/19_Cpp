/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:04:30 by lagea             #+#    #+#             */
/*   Updated: 2024/11/12 13:13:04 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_HPP__
#define __PMERGEME_HPP__

#include <list>
#include <deque>
#include <iostream>
#include <algorithm>
#include <sys/time.h>
#include <limits>

typedef unsigned long timestamp_t;

timestamp_t get_timestamp();

/*=============================================================================*/
/*==================================LIST======================================*/
/*=============================================================================*/

void displayList(std::list<int> &lst);
std::list<int>::iterator advanceIterator(std::list<int>::iterator it, int n);
std::list<int>::iterator binarySearch(std::list<int> &lst, int value);
std::list<int> merge(const std::list<int> &left, const std::list<int> &right);
std::list<int> mergeSort(const std::list<int>& inputList);
std::list<int> pMergeSortList(std::list<int> &lst);

/*=============================================================================*/
/*==================================DEQUE======================================*/
/*=============================================================================*/

void displayDeque(std::deque<int> &deq);
std::deque<int>::iterator binarySearch(std::deque<int> &deq, int value);
std::deque<int> merge(const std::deque<int> &left, const std::deque<int> &right);
std::deque<int> mergeSort(const std::deque<int>& inputDeque);
std::deque<int> pMergeSortDeque(std::deque<int> &deq);

#endif
