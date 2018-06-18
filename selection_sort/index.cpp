#include <iostream>

void print(int * array, size_t size)
{
	for(size_t i = 0; i < size; ++i)
	{
		std::cout << array[i] << " ";
	}

	std::cout << std::endl;
}

void selection_sort(int * array, size_t size)
{
	for(size_t j = 0; j < size; ++j)
	{
		int check = array[j];
		int index = j;

		for(size_t i = j + 1; i < size; ++i)
		{
			if(array[i] < check)
			{
				check = array[i];
				index = i;
			}
		}

		array[index] = array[j];
		array[j] = check;
	}
}

int main(int argc, char ** argv)
{
	srand(time(NULL));

	int array_size = atoi(argv[1]);

	int array[array_size];

	for(size_t i = 0; i < array_size; ++i)
	{
		array[i] = rand() % 30;
	}

	print(array, array_size);

	selection_sort(array, array_size);

	print(array, array_size);
}
