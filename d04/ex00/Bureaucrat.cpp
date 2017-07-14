#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	_name = "DEFAULT";
	_grade = 150;
}

Bureaucrat::Bureaucrat(int level, std::string nam)
{
	_name = nam;
	_grade = level;
}

Bureaucrat::~Bureaucrat();
