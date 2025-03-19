#include<iostream>
using namespace std;
int main()
{
	const int size = 6;
	int arr[size];
	cout << "enter number:";
	for (int i = 0; i < size; i++) {
		cin >>arr[i];
	}
	for (int i =0; i < size; i++) {
		for (int j = 0; j < size-i-1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout<< arr[i]<<" ";
	}




}