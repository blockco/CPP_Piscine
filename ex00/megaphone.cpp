/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <rpassafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 22:20:12 by rpassafa          #+#    #+#             */
/*   Updated: 2017/07/03 22:20:13 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>

int main(int argc, char const *argv[])
{
	std::stringstream ss;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEED BACK NOISE *";
		return 0;
	}
	if (argc > 1)
	{
		int i = 1;
		while (i < argc)
		{
			ss << argv[i];
			i++;
		}
	}
	std::string s = ss.str();
	int a = 0;
	while (s[a])
	{
		s[a] = toupper(s[a]);
		a++;
	}
	std::cout << s;
	return 0;
}
