/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:33:46 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:33:48 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Weapon.h"

Weapon::Weapon(std::string type) : type(type) {}

const std::string& Weapon::getType() {
	return type;
}

void Weapon::setType(std::string newType){
	type = newType;
}

