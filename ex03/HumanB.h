/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:33:29 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:33:31 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
#define HUMANB_H

#include <string>
#include "Weapon.h"

class HumanB {
private :
	std::string name;
	Weapon* weapon;

public :
	HumanB(std::string name);
	void setWeapon(Weapon& weapon);
	void attack();
};
#endif