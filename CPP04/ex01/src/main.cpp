/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 03:24:19 by lagea             #+#    #+#             */
/*   Updated: 2024/09/24 17:22:49 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

#include <iostream>
#include <string>
#include <memory>

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();

    // delete meta;
    // delete j;
    // delete i;
    
    // std::cout << "\n\n";
    
    // const WrongAnimal* a = new WrongAnimal();
    // const WrongAnimal* b = new WrongCat();
    // std::cout << b->getType() << std::endl;
    // b->makeSound();
    // a->makeSound();

    // delete a;
    // delete b;
    
    std::cout << "\n\n";
    
    const Animal* animal[10];
    
    for(int i = 0; i < 5; i++)
    {
        animal[i] = new Dog();
        animal[i]->makeSound();
    }
    for(int i = 5; i < 10; i++)
    {
        animal[i] = new Cat();
        animal[i]->makeSound();
    }
    for (int i=0; i < 10; i++)
    {
        // delete animal[i];
    }

    std::cout << "\n\n";

    Cat a;
    Cat b(a);

    std::cout << "a: idea n 1 : " << a.getBrain()->getIdea(1) << std::endl;
    std::cout << "b: idea n 1 : " << b.getBrain()->getIdea(1) << std::endl;
    a.getBrain()->setIdea(1, "Thinking..");
    std::cout << "a: idea n 1 : " << a.getBrain()->getIdea(1) << std::endl;
    std::cout << "b: idea n 1 : " << b.getBrain()->getIdea(1) << std::endl;
    
    system("leaks Animal");
    return 0;
}
