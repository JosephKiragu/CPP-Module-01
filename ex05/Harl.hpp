/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:34:53 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:34:54 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class Harl {
private :
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

public :
	void complain(std::string level);
};

#endif