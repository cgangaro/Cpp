#include "phonebook.class.hpp"

void	add(std::string arg, Phonebook *phonebook)
{
	int i = 0;

	while (phonebook->contact[i].get_empty() == 0)
	{
		i++;
		if (i == 8)
		{
			std::cout << "The phonebook is full, sorry" << std::endl;
			return ;
		}
	}
	std::cout << "The first name of new contact, please: ";
	getline(std::cin, arg);
	phonebook->contact[i].set_first_name(arg);
	std::cout << "The last name of new contact, please: ";
	getline(std::cin, arg);
	phonebook->contact[i].set_last_name(arg);
	std::cout << "The nickname of new contact, please: ";
	getline(std::cin, arg);
	phonebook->contact[i].set_nickname(arg);
	std::cout << "The phone number of new contact, please: ";
	getline(std::cin, arg);
	phonebook->contact[i].set_phone_number(arg);
	std::cout << "The darkest secret : ";
	getline(std::cin, arg);
	phonebook->contact[i].set_darkest_secret(arg);
	std::cout << "Great!" << std::endl;
	phonebook->contact[i].set_empty(0);
	return ;
}

void	display_column(std::string s)
{
	int i;
	i = 0;
	while (s[i] && i < 10)
	{
		if (i < 9)
			std::cout << s[i];
		if (i == 9 && s[i])
		{
			if (s[i + 1])
				std::cout << '.';
			else
				std::cout << s[i];
		}
		i++;
	}
	while (i < 10)
	{
		std::cout << ' ';
		i++;
	}
	return ;
}

void	search(Phonebook phonebook)
{
	int i;

	i = 0;
	if (phonebook.contact[0].get_empty() == 1)
	{
		std::cout << "The phonebook is empty.." << std::endl;
		return ;
	}
	std::cout << "   Index  |First name| Last name| Nickname" << std::endl;
	while (phonebook.contact[i].get_empty() == 0 && i < 8)
	{
		std::cout << "     " << i + 1 << "    |";
		display_column(phonebook.contact[i].get_first_name());
		std::cout << '|';
		display_column(phonebook.contact[i].get_last_name());
		std::cout << '|';
		display_column(phonebook.contact[i].get_nickname());
		std::cout << std::endl;
		i++;
	}
	std::cout << std::endl;
	return ;
}

int	main(void)
{
	std::string arg;
	Phonebook phonebook;

	std::cout << "Hello! Welcome to my phonebook"  << std::endl;
	while (1)
	{
		std::cout << "The commands allowed are: [ADD], [SEARCH], [EXIT]"  << std::endl;
		std::cout << "What's your choice ? : ";
		getline(std::cin, arg);
		if (arg.compare(0, 3, "ADD") == 0)
		{
			add(arg, &phonebook);
		}
		if (arg.compare(0, 6, "SEARCH") == 0)
		{
			search(phonebook);
		}
		if (arg.compare(0, 4, "EXIT") == 0)
		{
			std::cout << "Ok ciao" << std::endl;
			break ;
		}
	}
	return (0);
}