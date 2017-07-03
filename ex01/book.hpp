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
	int next;
	Book()
	{
		next = 0;
	}
	void searchit()
	{
		int i = 0;

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
			std::cout << temp << '|';

			i++;
			std::cout << std::endl;
		}
		std::cout << "pick entry to view";
		std::string choice;
		std::getline(std::cin, choice);
		int num = std::stoi(choice);
		this->people[num].print();
		return;
	}

	void addit()
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
};
