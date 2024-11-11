/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/11 15:50:26 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

int main()
{
    std::list<int> my_list;
    int arr[9] = {5, 2, 8, 1, 9, 3, 7, 4, 6};
    for (int i=0; i < 9; i++)
        my_list.push_back(arr[i]);
    timestamp_t start = get_timestamp();
    std::cout << "Before: ";
    displayList(my_list);
    my_list = pMergeSortList(my_list);
    timestamp_t end = get_timestamp();
    std::cout << "After: ";
    displayList(my_list);
    std::cout << "Time to process with List: " << end - start << " us." << std::endl;

    std::deque<int> my_deque;
    for (int i=0; i < 9; i++)
        my_deque.push_back(arr[i]);
    start = get_timestamp();
    pMergeSortDeque(my_deque);
    end = get_timestamp();
    std::cout << "Time to process with Deque: " << end - start << " us." << std::endl;

    return 0;
}
