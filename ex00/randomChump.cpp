/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:30:53 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:31:18 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"


void randomChump(std::string name)
{
	Zombie stackZombie(name);
	stackZombie.announce();
}