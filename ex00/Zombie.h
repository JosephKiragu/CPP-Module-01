/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:31:08 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:31:11 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

class Zombie {
	private:
		std::string name; // private attribute name
	
	public:
		Zombie(std::string name);
		~Zombie();
		void announce();

};

Zombie* zombieHorde(int N, std::string name);

#endif