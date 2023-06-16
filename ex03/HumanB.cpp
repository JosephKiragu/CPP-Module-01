/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:32:58 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:33:00 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.h"
#include <iostream>

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

void HumanB::setWeapon(Weapon& newWeapon) {
	weapon = &newWeapon;
}

void HumanB::attack() {
	if (weapon) {
		std::cout <<" Attacks with their " << weapon->getType() <<std::endl;
	}
	else {
		std::cout << " Has no weapon to atatck with" << std::endl;
	}
}

