/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:32:12 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:32:15 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//ZombieHorde.cpp
#include "Zombie.h"

Zombie* zombieHorde(int N ,std::string name)
{
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N ; i++) {
		horde [i].setName(name);
	}

	return horde;
}

