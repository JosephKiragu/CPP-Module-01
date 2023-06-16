/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:34:15 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:34:16 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// fileReplace.cpp
#include "fileReplace.hpp"
#include <fstream>
#include <sstream>
#include <algorithm>

FileReplace::FileReplace(std::string filename) : filename(filename) {}

bool FileReplace::replace(std::string s1, std::string s2) {
    std::ifstream inFile(filename);
    if (!inFile) {
        return false;
    }

    std::ostringstream ss;
    ss << inFile.rdbuf();
    std::string content = ss.str();
    inFile.close();

    size_t pos = content.find(s1);
    while (pos != std::string::npos) {
        content.replace(pos, s1.size(), s2);
        pos = content.find(s1, pos + s2.size());
    }

    std::ofstream outFile(filename + ".replace");
    if (!outFile) {
        return false;
    }

    outFile << content;
    outFile.close();
    return true;
}
