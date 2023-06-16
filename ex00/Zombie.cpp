/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:31:00 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:31:02 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.h"
#include <iostream>


// constructor
Zombie::Zombie(std::string zname) 
{
	this->name = zname;
}

//Destructor
Zombie::~Zombie()
{
	std::cout << "Destroying zombie " << this->name << std::endl;
}


void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}