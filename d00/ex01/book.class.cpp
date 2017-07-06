/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <rpassafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 22:18:37 by rpassafa          #+#    #+#             */
/*   Updated: 2017/07/05 22:35:12 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.class.hpp"
#include <iostream>
#include <exception>

void Contacts::print()
{
	std::cout << this->first_name << std::endl;
	std::cout << this->last_name << std::endl;
	std::cout << this->n_name << std::endl;
	std::cout << this->login << std::endl;
	std::cout << this->email << std::endl;
	std::cout << this->address << std::endl;
	std::cout << this->phone_num << std::endl;
	std::cout << this->birth << std::endl;
	std::cout << this->meal << std::endl;
	std::cout << this->under << std::endl;
	std::cout << this->secret << std::endl;
}

Book::Book()
{
	next = 0;
}

void Book::searchit()
{
	int i = 0;

	std::cout.width(10);
	std::cout << std::right << "Index";
	std::cout << '|';
	std::cout.width(10);
	std::cout << std::right << "First";
	std::cout << '|';
	std::cout.width(10);
	std::cout << std::right << "Last";
	std::cout << '|';
	std::cout.width(10);
	std::cout << std::right << "nickname" << std::endl;
	while (i < this->next)
	{
		std::string temp;

		std::cout.width(10);
		std::cout << std::right;
		std::cout << this->people[i].spot << '|';

		if (this->people[i].first_name.length() > 10)
		{
			temp = this->people[i].first_name.substr(0,8);
			temp = temp + '.';
		}
		else
			temp = this->people[i].first_name;
		std::cout.width(10);
		std::cout << std::right;
		std::cout << temp << '|';

		if (this->people[i].last_name.length() > 10)
		{
			temp = this->people[i].last_name.substr(0,8);
			temp = temp + '.';
		}
		else
			temp = this->people[i].last_name;
		std::cout.width(10);
		std::cout << std::right;
		std::cout << temp << '|';

		if (this->people[i].n_name.length() > 10)
		{
			temp = this->people[i].n_name.substr(0,8);
			temp = temp + '.';
		}
		else
			temp = this->people[i].n_name;
		std::cout.width(10);
		std::cout << std::right;
		std::cout << temp;

		i++;
		std::cout << std::endl;
	}
	std::cout << "pick entry to view";
	int t = 1;
	int num = 0;
	while (t && std::cin != 0)
	{
		std::string choice;
		std::getline(std::cin, choice);
		try
		{
			num = std::stoi(choice);
		}
		catch(std::exception& err)
		{
			std::cout << "not digit retry";
			continue;
		}
		if (num < this->next && num > -1)
			t = 0;
		else
			std::cout << "RETRY" << std::endl;
	}
	this->people[num].print();
	return;
}

void Book::addit()
{
	if (this->next > 7)
	{
		std::cout << "GOD DANNGIT BOBBY";
		return;
	}
	std::cout << "What is your first name Young one" << std::endl;
	std::getline (std::cin, this->people[this->next].first_name);

	std::cout << "What is your Last name Young one" << std::endl;
	std::getline (std::cin, this->people[this->next].last_name);

	std::cout << "What is your nick name Young one" << std::endl;
	std::getline (std::cin, this->people[this->next].n_name);

	std::cout << "What is your LOGIN Young one" << std::endl;
	std::getline (std::cin, this->people[this->next].login);

	std::cout << "What is your EMAIL Young one" << std::endl;
	std::getline (std::cin, this->people[this->next].email);

	std::cout << "What is your ADDRESS Young one" << std::endl;
	std::getline (std::cin, this->people[this->next].address);

	std::cout << "What is your PHONE NUMBAAA Young one" << std::endl;
	std::getline (std::cin, this->people[this->next].phone_num);

	std::cout << "What is your BIRTH DATE Young one" << std::endl;
	std::getline (std::cin, this->people[this->next].birth);

	std::cout << "What is your FAVORITE MEAL Young one" << std::endl;
	std::getline (std::cin, this->people[this->next].meal);

	std::cout << "What is your UNDER WEAR COLOR" << std::endl;
	std::getline (std::cin, this->people[this->next].under);

	std::cout << "What is your secret" << std::endl;
	std::getline (std::cin, this->people[this->next].secret);

	this->people[this->next].spot = this->next;
	this->next++;
}
