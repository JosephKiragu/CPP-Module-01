/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:34:33 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:34:41 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// main.cpp
#include "fileReplace.hpp"
#include <string>
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cout << "Usage: ./replace <filename> <string1> <string2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    FileReplace fr(filename);
    if (!fr.replace(s1, s2)) {
        std::cout << "Error occurred during replace operation" << std::endl;
        return 1;
    }

    return 0;
}
