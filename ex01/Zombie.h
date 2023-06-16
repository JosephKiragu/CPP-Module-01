/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:31:58 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:31:59 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



//zombie.h
#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string>

class Zombie {
	private:
		std::string name; // private attribute name
	
	public:
		Zombie() : name("") {}
		Zombie(std::string name);
		~Zombie();
		void announce();

		void setName(std::string name) {
			this->name = name;
		}

};

Zombie* zombieHorde(int N ,std::string name);


#endif