#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	public:

		Contact(void);
		~Contact(void);
		void	set_first_name(std::string s);
		void	set_last_name(std::string s);
		void	set_nickname(std::string s);
		void	set_phone_number(std::string s);
		void	set_darkest_secret(std::string s);
		void	set_empty(int i);
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
		std::string	get_phone_number(void);
		std::string	get_darkest_secret(void);
		int	get_empty(void);

	private:

		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
		int	_empty;

		int	_verif_phone_number(std::string s);
};

#endif