#include "contact.class.hpp"
#include <iostream>
#include <string>

Contact::Contact(void)
{
	this->_empty = 1;
	return ;
}

Contact::~Contact(void)
{
	return ;
}

int	Contact::get_empty(void)
{
	return Contact::_empty;
}

void	Contact::set_empty(int i)
{
	this->_empty = i;
	return ;
}

void	Contact::set_first_name(std::string s)
{
	while(s.empty() == 1)
	{
		std::cout << "The first name is not correct..." << std::endl;
		std::cout << "Please, enter a new first name : ";
		getline (std::cin, s);
	}
	this->_first_name = s;
	return ;
}

std::string	Contact::get_first_name(void)
{
	return this->_first_name;
}

void	Contact::set_last_name(std::string s)
{
	this->_last_name = s;
	return ;
}

std::string	Contact::get_last_name(void)
{
	return this->_last_name;
}

void	Contact::set_nickname(std::string s)
{
	this->_nickname = s;
	return ;
}

std::string	Contact::get_nickname(void)
{
	return this->_nickname;
}

void	Contact::set_phone_number(std::string s)
{

	while (_verif_phone_number(s) == 0)
	{
		std::cout << "The phone number is not correct..." << std::endl;
		std::cout << "Please, enter a new phone number : ";
		getline (std::cin, s);
	}
	this->_phone_number = s;
	return ;
}

std::string	Contact::get_phone_number(void)
{
	return this->_phone_number;
}

void	Contact::set_darkest_secret(std::string s)
{
	this->_darkest_secret = s;
	return ;
}

std::string	Contact::get_darkest_secret(void)
{
	return this->_darkest_secret;
}

int	Contact::_verif_phone_number(std::string  s)
{
	int	i = 0;

	while (s[i])
	{
		if (s[i] < 48 || s[i] > 57)
			return (0);
		i++;
	}
	if (i != 10)
		return (0);
	return (1);
}
