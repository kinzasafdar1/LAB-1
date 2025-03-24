#include <iostream>
#include <string>
using namespace std;

template <class T>
void printArray(T arr[], int size) 
{
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <class T>
void selectionSort(T arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{  
				swap(arr[i], arr[j]);
			}
		}
	}
}

int main() 
{
	int numbers[] = { 64, 25, 12, 22, 11 };
	cout << "Original numbers: ";
	printArray(numbers, 5);
	selectionSort(numbers, 5);
	cout << "Sorted numbers: ";
	printArray(numbers, 5);

	string fruits[] = { "apple", "orange", "banana", "grape" };
	cout << "Original fruits: ";
	printArray(fruits, 4);
	selectionSort(fruits, 4);
	cout << "Sorted fruits: ";
	printArray(fruits, 4);

	system("pause");
	return 0;
}