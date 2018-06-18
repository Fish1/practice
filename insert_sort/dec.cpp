#include <vector>

#include <iostream>

void fill(std::vector<int>& v)
{
	for(unsigned int index = 0; index < 10; ++index)
	{
		v.push_back(rand() % 20);
	}
}

void print(std::vector<int>& v)
{
	for(int e : v)
	{
		std::cout << e << " ";
	}

	std::cout << std::endl;
}

// increasing
void insert_sort(std::vector<int> & v)
{
	for(size_t index_a = v.size() - 2; index_a > 0; --index_a)
	{
		int key = v[index_a];

		size_t index_b = index_a + 1;

		while(index_b < v.size() && v[index_b] > key)
		{
			v[index_b - 1] = v[index_b];
			index_b += 1;
		}

		v[index_b - 1] = key;
	}
}

int main(void)
{
	srand(time(NULL));

	std::vector<int> myVector;

	fill(myVector);

	print(myVector);

	insert_sort(myVector);

	print(myVector);
}
