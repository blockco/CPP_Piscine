/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <rpassafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 16:07:04 by rpassafa          #+#    #+#             */
/*   Updated: 2017/07/06 21:37:24 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void  ponyOnTheHeap()
{
	Pony *h_p_1 = new Pony();
}

void  ponyOnTheStack()
{
	Pony s_p_1("hello", 100, 150);
	delete h_p_1;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	// Pony *h_p_0 = new Pony();
	// Pony s_p_0("bob", 500, 1000);
	// delete h_p_0;
	return 0;
}
