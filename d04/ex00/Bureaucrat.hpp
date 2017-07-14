class Bureaucrat{
public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat();
	void getName();
	void getGrade();
private:
	struct GradeTooHighException : public std::exception
	{
		char const *what() const throw{ return "GradeTooHighException";}
	}
	struct GradeTooLowException : public std::exception
	{
		char const *what() const throw{ return "GradeTooLowException";}
	}
	const std::string _name;
	int _grade;
}
