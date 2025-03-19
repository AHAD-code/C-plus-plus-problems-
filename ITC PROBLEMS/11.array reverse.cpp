#include<iostream>
using namespace std;
int main()
{
	 const int size = 7;
	int arr[size];
	int i = 0, j= size - 1;
	cout << "enter numbers";
	for (int i = 0; i < size; i++) {
		cin>> arr[i];
	}
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