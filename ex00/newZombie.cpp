/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:30:39 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:30:42 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.h"

Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}