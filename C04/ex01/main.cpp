/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:30:48 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/11/01 11:30:48 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	const	Animal* meta[10];
	const	Cat* babyCat;

	for (int i(0); i < 10; i++)
	{
		if (i < 5)
			meta[i] = new Cat();
		else
			meta[i] = new Dog();
	}
	std::cout << std::endl;
	
	for (int i(0); i < 10; i++)
		std::cout << meta[i]->getType() << std::endl;
	std::cout << std::endl;
	
	babyCat = new Cat();
	std::cout << G "\nbabyCat has 100 ideas to make a mess: " RS << std::endl;
	babyCat->getIdeas();

	std::cout << G "\nMeta animals should be cast as <<cat *>> or <<dog *>> to get ideas:" RS << std::endl;
	((Cat *)meta[0])->getIdeas();
	std::cout << std::endl;

	// Just an example to compare with ex02
	std::cout << G "\nFor this exercise Animal can be instantiated as object, this is not the case for the following exercise : " RS << std::endl;
	const	Animal* err; 
	err = new Animal();
	delete err;
	std::cout << std::endl;

	for (int i(0); i < 10; i++)
		delete meta[i];
	std::cout << std::endl;
	delete babyCat;
	
	return 0;
}