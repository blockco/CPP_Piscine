/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpassafa <rpassafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:49:51 by rpassafa          #+#    #+#             */
/*   Updated: 2017/07/04 16:59:38 by rpassafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Pony {

public:
	void poneyinfo();
	void eat(float much);
	Pony();
	Pony(std::string c_name, float c_weight, int c_inch_h);
	~Pony();

private:
	std::string name;
	float weight;
	int inch_h;
};
