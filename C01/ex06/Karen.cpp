#include "Karen.hpp"

Karen::Karen(void)
{
	this->_tab[0] = &Karen::_debug;
	this->_tab[1] = &Karen::_info;
	this->_tab[2] = &Karen::_warning;
	this->_tab[3] = &Karen::_error;
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << std::endl;
	std::cout <<  "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << std::endl;
	std::cout <<  "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << std::endl;
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << std::endl;
	std::cout <<  "This is unacceptable, I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	return ;
}

void	Karen::complain(std::string level)
{
	std::string msg[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int i = 0;
	int n = 0;

	while (i < 4)
	{
		switch (level.compare(msg[i]))
		{
			case 0: 
			{
				while (i < 4)
				{
					(this->*_tab[i])();
					i++;
				}
			}
			default: 
			{
				i++;
				n++;
			}
		}
	}
	if (n == 4 && i != 5)
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return ;
}