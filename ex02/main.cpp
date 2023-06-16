/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:32:29 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:32:31 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>


int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	// printing memory address
	std::cout <<"The memory address of str = " << &str << std::endl;
	std::cout <<"The memory address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF = " << &stringREF << std::endl;


	// printing string values
	std::cout <<"The value of str = " << str <<std::endl;
	std::cout <<"The value of stringPTR = " << *stringPTR << std::endl;
	std::cout <<"The value of stringREF = " << stringREF << std::endl;

	return 0;

}