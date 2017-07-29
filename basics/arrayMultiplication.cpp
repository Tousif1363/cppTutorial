#include <iostream>

using namespace std;

int multiplyArrayIterative(int arr[], int n) {
	int product = 1;
	for(int i = 0; i < n; i++)
	{
		product*= arr[i];
	}
	return product;
}

int multiplyArrayRecursive(int arr[], int n) {
	if(n == 0)
		return 1;
	return arr[n - 1] * multiplyArrayRecursive(arr, n - 1); 
}

int main()
{
	int array[] = {1, 2, 3, 4, 5, 6};
	cout << "The product of the array elements is: " << multiplyArrayRecursive(array, 6) << '\n';
	return 0;
}
