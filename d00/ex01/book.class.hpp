/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <rpassafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 22:18:44 by rpassafa          #+#    #+#             */
/*   Updated: 2017/07/03 22:18:44 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contacts
{
	public:
		std::string first_name;
		std::string last_name;
		std::string n_name;
		std::string login;
		std::string email;
		std::string address;
		std::string phone_num;
		std::string birth;
		std::string meal;
		std::string under;
		std::string secret;
		int spot;

		void print();
};

class Book
{
	public:
		Contacts people[8];
		int next;

		Book();
		void searchit();
		void addit();
};
