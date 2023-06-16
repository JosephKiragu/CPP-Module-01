/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:31:37 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:31:38 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



//main.cpp
#include "Zombie.h"

int main()
{
	int N = 5;

	Zombie* horde = zombieHorde(N, "Brain eaters");

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}

	delete [] horde;

	return 0;
}