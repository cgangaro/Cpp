#include <iostream>
#include <string>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";

	std::string *string_PTR = &string;
	std::string &string_REF = string;

	std::cout << "Adress of the string:" << std::endl;
	std::cout << "With string : " << &string << std::endl;
	std::cout << "With string_PTR : " << string_PTR << std::endl;
	std::cout << "With string_REF : " << &string_REF << std::endl;

	std::cout << "Content of the string:" << std::endl;
	std::cout << "With string : " << string << std::endl;
	std::cout << "With string_PTR : " << *string_PTR << std::endl;
	std::cout << "With string_REF : " << string_REF << std::endl;
	return (0);
}