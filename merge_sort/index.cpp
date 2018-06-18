#include <iostream>

#include <cstring>

bool is_even(size_t a)
{
	return a % 2 == 0;
}

void print(int * list, size_t length)
{
	for(size_t index = 0; index < length; ++index)
	{
		std::cout << list[index] << " ";
	}

	std::cout << std::endl;
}

int * merge(int * list, size_t length)
{
	int * k = list;

	size_t new_length = length / 2;

	int left[new_length + 1];
	int * i = left;
	for(size_t index = 0; index < new_length; ++index)
	{
		left[index] = list[index];
	}
	left[new_length] = '\0';

	int right[new_length + 1];
	int * j = right;
	for(size_t index = 0; index < new_length; ++index)
	{
		right[index] = list[index + new_length];
	}
	right[new_length] = '\0';

	for(size_t index = 0; index < length; ++index)
	{
		if(i - new_length != left && j - new_length != right)
		{
			if(*i < *j)
			{
				*k = *i;
				i += 1;
			}
			else
			{
				*k = *j;
				j += 1;
			}
		}
		else if(j - new_length != right)
		{
			*k = *j;
			j += 1;
		}
		else
		{
			*k = *i;
			i += 1;
		}

		k += 1;
	}

	return list;
}

int main(int argc, char ** argv)
{
	size_t list_size = argc - 1;

	if(is_even(list_size) == false)
	{
		std::cout << "Please provide a list with an even number of elements" << std::endl;

		return -1;
	}
	
	int * list = new int[list_size];

	for(size_t index = 1; index < argc; ++index)
	{
		list[index - 1] = atoi(argv[index]);
	}

	print(list, list_size);

	merge(list, list_size);

	print(list, list_size);

	return 0;
}
