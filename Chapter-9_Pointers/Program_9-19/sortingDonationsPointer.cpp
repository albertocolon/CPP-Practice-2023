// This program shows the donations made to the United Cause
// by the employeesof CK Graphics, Inc. It displays
// the donations in order from the lowest to the highest
// and in the original order they were received. 

#include <iostream>
using namespace std;

// Fucntion prototypes
void arrSelectorSort(int* [], int);
void showArray(const int[], int);
void showArrPtr(int* [], int);

int main()
{
	const int NUM_DONATIONS = 15;		// Number of donations

	// An arrat containing the donatioins amounts.
	int donations[NUM_DONATIONS] = { 5, 100, 5, 25, 10, 5, 25, 5, 5, 100, 10, 15, 10, 5, 10 };


	// An array of pointers to int.
	int* arrPtr[NUM_DONATIONS] = { nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr };


	// Each element of arrPtr is a pointer to int. Make each element point to an element in the donations array.
	for (int count = 0; count < NUM_DONATIONS; count++)
		arrPtr[count] = &donations[count];

	// Sort the elements of the array of pointers.
	arrSelectorSort(arrPtr, NUM_DONATIONS);

	// Display the donations using the array of pointers. This
	// will display them in sorted order.
	cout << "The donations, sorted in ascending order are: \n";
	showArrPtr(arrPtr, NUM_DONATIONS);
	cout << endl;

	// Display the donations in their original order. 
	cout << "The donations, in their original order are: \n";
	showArray(donations, NUM_DONATIONS);
	
	return 0;

}


// **********************************************************************
// Definition of function arrSelectSort.							    *
// This function performs an ascending order selection sort on          *
// arr, shich is an array of pointers. Each element of array            *
// points to an element of a second array. After the sort,              *
// arr will point to the element of the second array in ascending order *
// **********************************************************************

void arrSelectorSort(int* arr[], int size)
{
	int startScan, minIndex;
	int* minElem;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minElem = arr[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (*(arr[index]) < *minElem)
			{
				minElem = arr[index];
				minIndex = index;
			}
		}
		arr[minIndex] = arr[startScan];
		arr[startScan] = minElem;
	}
}


// **********************************************************************
// Definition if the function showArray.                                *
// This function displays the contents of arr. size is the              *
// number of elements.                                                  *
// **********************************************************************

void showArray(const int arr[], int size)
{
	for (int count = 0; count < size; count++)
		cout << arr[count] << " ";
	cout << endl;
}

// **********************************************************************
// Definition of function showArrayPtr.                                 *
// This function dislplays the contents of arr. size is the             *
// by arr. size is the number of elements.                              *
// **********************************************************************

void showArrPtr(int* arr[], int size)
{
	for (int count = 0; count < size; count++)
		cout << *(arr[count]) << " ";
	cout << endl;
}