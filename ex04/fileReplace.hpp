/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileReplace.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josephkiragu <josephkiragu@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:34:25 by josephkirag       #+#    #+#             */
/*   Updated: 2023/06/16 19:34:26 by josephkirag      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// fileReplace.hpp
#ifndef FILE_REPLACE_HPP
#define FILE_REPLACE_HPP

#include <string>

class FileReplace {
private:
    std::string filename;

public:
    FileReplace(std::string filename);
    bool replace(std::string s1, std::string s2);
};

#endif
