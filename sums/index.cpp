#include <iostream>

int main(int argc, char ** argv)
{
	/* array_length max_sum max_data */

	if(argc != 4)
	{
		std::cout << " array_length max_sum max_data " << std::endl;

		return 0;
	}

	srand(time(NULL));

	int array_length = atoi(argv[1]);
	int max_sum = atoi(argv[2]);
	int max_data = atoi(argv[3]);

	int sum = rand() % max_sum;

	std::cout << "Sum = " << sum << std::endl;
	
	int array[array_length];

	std::cout << "[ ";

	for(unsigned int index = 0; index < array_length; ++index)
	{
		array[index] = rand() % max_data;

		std::cout << array[index] << ", ";
	}

	std::cout << "]" << std::endl;

	for(unsigned int index_a = 0; index_a < array_length; ++index_a)
	{
		for(unsigned int index_b = index_a + 1; index_b < array_length; ++index_b)
		{
			if(array[index_a] + array[index_b] == sum)
			{
				std::cout << "Indices (" << 
			}
		}
	}
}
