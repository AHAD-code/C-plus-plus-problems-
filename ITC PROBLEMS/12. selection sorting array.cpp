#include<iostream>
using namespace std;
int main()
{

	const int size = 6;
	int box[size];
	cout << "enter number:";
	for (int i = 0; i < size; i++) {
		
		cin >> box[i];
	}
	for (int j = 0; j < size; j++) {
		int index = j;


		int min = box[j];
		for (int i = j + 1; i < size; i++) {
			if (min > box[i]) {
				min = box[i];
				index = i;

			}
		}

		int temp = box[index];
		box[index] = box[j];
		box[j] = temp;
	}
	for (int i = 0; i < size; i++) {
		cout << box[i]<<" ";
	}



}
