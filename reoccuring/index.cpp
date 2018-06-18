#include <iostream>

#include <string>

#include <vector>

bool contains_value(std::vector<char>& vector, char value)
{
	for(char e : vector)
	{
		if(e == value)
		{
			return true;
		}
	}

	return false;
}

char first_recurring(std::string string)
{
	std::vector<char> past_characters;

	for(unsigned int index = 0; index < string.size(); ++index)
	{
		char current_character = string[index];

		if(contains_value(past_characters, current_character))
		{
			return current_character;
		}
		else
		{
			past_characters.push_back(current_character);
		}	
	}

	return ' ';
}

int main(int argc, char ** argv)
{
	std::cout << "Please enter a string with no spaces." << std::endl;

	std::string string;

	std::cin >> string;

	char answer = first_recurring(string);	

	std::cout << answer << std::endl;
}
