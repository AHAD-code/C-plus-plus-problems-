#include<iostream>
using namespace std;
int main()
{
	 const int size = 7;
	int arr[size];
	
	cout << "enter numbers";
	for (int i = 0; i < size; i++) {
		cin>> arr[i];
	}
	int i = 0, j= size - 1;
	while (i< j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;

	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
