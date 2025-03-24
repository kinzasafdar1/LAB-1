#include<iostream>
using namespace std;

int main()
{
	int arr[] = { 5040, 10080, 6000, 0, 10080, 5040 };

	for (int i = 0; i < 6; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if ((arr[i] + arr[j + 1]) % 10080 == 0)
			{
				cout << "(" << i << "," << j + 1 << ")" << endl;
			}
		}
	}
	system("pause");
	return 0;
}