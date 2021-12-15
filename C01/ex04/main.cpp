#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Parameters incorrect" << std::endl;
		return 1;
	}
	std::string file_name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "s1 and/or s2 are empty" << std::endl;
		return 1;
	}
	std::ifstream ifs;
	std::ofstream ofs;

	ifs.open(file_name);
	if (ifs.fail())
	{
		std::cout << "Error: the file cannot found or reading" << std::endl;
		return 1;
	}
	ofs.open(file_name + ".replace");
	std::string temp;
	std::string str;
	int i;
	while (std::getline(ifs, temp))
	{
		if ((i = temp.find(s1)) != -1)
		{
			str.append(temp, 0, i);
			str.append(s2);
			str.append(temp, i + s1.length(), temp.length() - i);
			ofs << str << std::endl;
			str.erase(0, str.length());
		}
		else
			ofs << temp << std::endl;
	}
	return 0;
}