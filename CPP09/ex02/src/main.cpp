/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/12 13:26:16 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Error: usage: ./PmergeMe <int> <int> <int> <int> <int> ..." << std::endl;
        return 1;
    }
    
    std::list<int> my_list;
    std::deque<int> my_deque;
    
    int i = 0;
    while (av[++i])
    {
        int j = -1;
        while (av[i][++j])
        {
            if (!isdigit(av[i][j]))
            {
                std::cerr << "Error: input: can only be positive numbers." << std::endl;
                return 1;
            }
        }
        long tmp = std::atol(av[i]);
        if (tmp > std::numeric_limits<int>::max())
        {
            std::cerr << "Error: input: can only be a positive integer." << std::endl;
            return 1;
        }
        int nbr = static_cast<int>(tmp);
        my_list.push_back(nbr);
        my_deque.push_back(nbr);
    }
    std::cout << "Before: ";
    displayList(my_list);
    
    timestamp_t start = get_timestamp();
    my_list = pMergeSortList(my_list);
    timestamp_t end = get_timestamp();
    
    std::cout << "After: ";
    displayList(my_list);
    
    std::cout << "Time to process a range of " << my_list.size() << " elements with List: " << end - start << " us." << std::endl;

    start = get_timestamp();
    pMergeSortDeque(my_deque);
    end = get_timestamp();
    
    std::cout << "Time to process a range of " << my_deque.size() << " elements with Deque: " << end - start << " us." << std::endl;

    return 0;
}
