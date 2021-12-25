#include<iostream>
#include<string>
int main()
{
	std::string str;
	std::getline(std::cin, str);

	int counter = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str.c_str()[i])) counter++;
	}
	std::cout << "numbers: " << counter << "\n";

	counter = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (isalpha(str.c_str()[i])) counter++;
	}
	std::cout << "letters: " << counter << "\n";

	counter = 0;
	for (int i = 0; str.find(" ", i) < str.length(); i = str.find(" ", i) + 1)
	{
		counter++;
	}
	std::cout << "spaces: " << counter << "\n";

	counter = 0;
	for (int i = 0; str.find("Hello", i) < str.length(); i = str.find("Hello", i) + 5)
	{
		counter++;
	}
	std::cout << "hello's: " << counter << "\n\n";

	for (int i = 0; str.find(" ", i) < str.length();)
	{
		i = str.find(" ", i) + 1;
		str.replace(i - 1, 1, ",");
	}
	_strrev((char*)str.c_str());
	std::cout << str;
}