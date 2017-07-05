/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <rpassafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:49:39 by rpassafa          #+#    #+#             */
/*   Updated: 2017/07/04 17:15:10 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <string>
#include <iostream>

Pony::Pony()
{
	this->name = "Default";
	this->weight = 100;
	this->inch_h = 58;
	std::cout << "A Pony named: " << this->name << " has been born" << std::endl;
	std::cout << "Raise a cup to the gods" << std::endl;
}


Pony::Pony(std::string c_name, float c_weight, int c_inch_h)
{
	this->name = c_name;
	this->weight = c_weight;
	this->inch_h = c_inch_h;
	std::cout << "A Pony named: " << c_name << " has been born" << std::endl;
	std::cout << "Raise a cup to the gods";
}

Pony::~Pony()
{
	std::cout << this->name << " has died. Sorry bout' that" << std::endl;
}

void Pony::poneyinfo()
{
	std::cout << "This Pony name is " << this->name << std::endl;
	std::cout << "The Pony Weight is " << this->weight << std::endl;
	std::cout << "This Pony Height is " << this->inch_h << std::endl;
}

void Pony::eat(float much)
{
	std::cout << "The Pony ate " << much << " pounds of food" << std::endl;
	this->weight += much;
}
