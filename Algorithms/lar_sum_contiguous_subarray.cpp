//Kadane's Algorithm

#include <iostream>
using namespace std;

int main()
{
	int ar[10];

	int max_so_far = 0, max_ending_here = 0;

	for (int i = 0; i < 10; ++i)
	{
		cin >> ar[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		max_ending_here = max_ending_here + ar[i];

		if (max_ending_here < 0)
		{
			max_ending_here = 0;
		}

		if (max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;
		}
	}

	cout << max_so_far;

	return 0;
}
