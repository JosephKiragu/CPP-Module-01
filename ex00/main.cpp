/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:30:29 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:30:31 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"
#include <iostream>

// forward declarations

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	// create zombie on the heap
	Zombie* heapZombie = newZombie("Super heap zombie");
	heapZombie->announce();

	// create zombie on the stack
	randomChump("Stack villain zombie");

	delete heapZombie;

	return 0;
}
