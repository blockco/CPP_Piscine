#include <iostream>

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

	void print()
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
};

class Book
{
public:
	Contacts people[8];
	int num;
	Book()
	{
		num = 0;
	}
	void addit()
	{
		if (this->num > 7)
		{
			std::cout << "GOD DANNGIT BOBBY";
			return;
		}
		std::cout << "What is your first name Young one" << std::endl;
		std::getline (std::cin, this->people[this->num].first_name);

		std::cout << "What is your Last name Young one" << std::endl;
		std::getline (std::cin, this->people[this->num].last_name);

		std::cout << "What is your nick name Young one" << std::endl;
		std::getline (std::cin, this->people[this->num].n_name);

		std::cout << "What is your LOGIN Young one" << std::endl;
		std::getline (std::cin, this->people[this->num].login);

		std::cout << "What is your EMAIL Young one" << std::endl;
		std::getline (std::cin, this->people[this->num].email);

		std::cout << "What is your ADDRESS Young one" << std::endl;
		std::getline (std::cin, this->people[this->num].address);

		std::cout << "What is your PHONE NUMBAAA Young one" << std::endl;
		std::getline (std::cin, this->people[this->num].phone_num);

		std::cout << "What is your BIRTH DATE Young one" << std::endl;
		std::getline (std::cin, this->people[this->num].birth);

		std::cout << "What is your FAVORITE MEAL Young one" << std::endl;
		std::getline (std::cin, this->people[this->num].meal);

		std::cout << "What is your UNDER WEAR COLOR" << std::endl;
		std::getline (std::cin, this->people[this->num].under);

		std::cout << "What is your secret" << std::endl;
		std::getline (std::cin, this->people[this->num].secret);

		this->num++;
	}
};


int main() {
	Book phone;
	std::string action;

	while (1)
	{
		std::cout << "Pick action: ";
		std::getline (std::cin,action);
		if (action.compare("EXIT") == 0)
			break;
		if (action.compare("ADD") == 0)
			phone.addit();
		if (action.compare("SEARCH") == 0)
			std::cout << "print fun" << std::endl;
	}
	return 0;
}
