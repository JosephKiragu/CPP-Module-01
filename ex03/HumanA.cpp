/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:32:43 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:32:45 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.h"
#include <iostream>
HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

void HumanA::attack() {
	std::cout << "Attacks with their " << weapon.getType() <<std::endl;

}