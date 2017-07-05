/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <rpassafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 22:18:47 by rpassafa          #+#    #+#             */
/*   Updated: 2017/07/03 22:18:49 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "book.class.hpp"

int main() {
	Book phone;
	std::string action;

	while (1)
	{
		std::cout << "Pick action: ";
		std::getline (std::cin, action);
		if (action.compare("EXIT") == 0)
			break;
		if (action.compare("ADD") == 0)
			phone.addit();
		if (action.compare("SEARCH") == 0)
			phone.searchit();
	}
	return 0;
}
