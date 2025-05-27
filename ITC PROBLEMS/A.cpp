#include<iostream>
using namespace std;
int main()
{
	const int size = 100;
	int roll[size];
	float mid[size];
	float final[size];
	int classs[size];
	char grade[size];
	int currentsize = 50;
	int choice;
	for (int i = 0; i < 50; i++) {
		bool f = false;
		roll[i] = 1+100 + i;
		mid[i] = i % 50;
		final[i] = i % 100;
		classs[i] = 1 + i % 10;
		if (final[i] < 50) {
			grade[i] = 'F';

		}
		else if (final[i] >= 50 && final[i] <= 59) {
			grade[i] = 'D';

		}
		else if (final[i] >= 60 && final[i] <= 72) {
			grade[i] = 'C';

		}
		else if (final[i] >= 73 && final[i] <= 85) {
			grade[i] = 'B';

		}
		else if (final[i] > 85) {
			grade[i] = 'A';

		}
	}

	for (int i = 0; i >= 0; i++) {
		cout << "1 enter for roll number sorting in accending order:" << endl;
		cout << "2 enter for roll number sorting in decending order:" << endl;
		cout << "3enter for mid marks sorting in accending order:" << endl;
		cout << "4enter for mid marks sorting in decending order:" << endl;
		cout << "9 for add member :";
		cin >> choice;
		if (choice == 1) {
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {
					if (roll[k] > roll[k + 1]) {
						int temp = roll[k];
						roll[k] = roll[k + 1];
						roll[k + 1] = temp;

						float temp2 = mid[k];
						mid[k] = mid[k + 1];
						mid[k + 1] = temp2;

						float temp3 = final[k];
						final[k] = final[k + 1];
						final[k + 1] = temp3;

						int temp4 = classs[k];
						classs[k] = classs[k + 1];
						classs[k + 1] = temp4;

						char temp5 = grade[k];
						grade[k] = grade[k + 1];
						grade[k + 1] = temp5;
					}
				}
			}





			for (int i = 0; i < currentsize; i++) {
				cout << roll[i] << "  " << mid[i] << "   " << final[i] << "   " << classs[i] << "   " << grade[i] << endl;
			}


		}
		else if (choice == 2) {
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (roll[k] < roll[k + 1]) {
						int temp = roll[k];
						roll[k] = roll[k + 1];
						roll[k + 1] = temp;

						float temp2 = mid[k];
						mid[k] = mid[k + 1];
						mid[k + 1] = temp2;

						float temp3 = final[k];
						final[k] = final[k + 1];
						final[k + 1] = temp3;

						int temp4 = classs[k];
						classs[k] = classs[k + 1];
						classs[k + 1] = temp4;

						char temp5 = grade[k];
						grade[k] = grade[k + 1];
						grade[k + 1] = temp5;
					}
				}
			}





			for (int i = 0; i < currentsize; i++) {
				cout << roll[i] << "  " << mid[i] << "   " << final[i] << "   " << classs[i] << "   " << grade[i] << endl;
			}


		}

		else if (choice == 9) {
			cout << "enter roll number";
			for (int i = 0; i >= 0; i++) {
				cin >> roll[currentsize];
				if (roll[currentsize] >= 101 && roll[currentsize] <= 200) {
					break;
				}
				else {
					cout << "enter unique(betweeen:101-200) roll number:";
				}
			}
			bool f = false;
			for (int k = 0; k < currentsize; k++) {
				if (roll[currentsize] == roll[k]) {
					cout << "roll number already exist" << endl;
					f = true;
					break;
				}
			}
			if (f == false) {
				cout << "enter mid marks:";
				
				for (int i = 0; i >= 0; i++) {
					cin >> mid[currentsize];
					if (mid[currentsize] >=-1 &&mid[currentsize] <=50) {
						break;
					}
					else {
						cout << "enter marks between(0-50)";
					}
				}
				cout << "enter final marks:";
				for (int i = 0; i >= 0; i++) {
					cin >> final[currentsize];
					if (final[currentsize] >= -1 && final[currentsize] <=100) {
						break;
					}
					else {
						cout << "enter marks between(0-100)";
					}
				}
				
				cout << "enter class:";
				for (int i = 0; i >= 0; i++) {
					cin >> classs[currentsize];
					if (classs[currentsize] >=0 && classs[currentsize] <= 10) {
						break;
					}
					else {
						cout << "enter class between(0-10)";
					}
				}
				
				
				if (final[currentsize] < 50) {
					grade[currentsize] = 'F';

				}
				else if (final[currentsize] >= 50 && final[currentsize] <= 59) {
					grade[currentsize] = 'D';

				}
				else if (final[currentsize] >= 60 && final[currentsize] <= 72) {
					grade[currentsize] = 'C';

				}
				else if (final[currentsize] >= 73 && final[currentsize] <= 85) {
					grade[currentsize] = 'B';

				}
				else if (final[currentsize] > 85) {
					grade[currentsize] = 'A';

				}
				currentsize++;
			}
		}
		else if (choice == 3) {
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (mid[k] > mid[k + 1]) {
						int temp = roll[k];
						roll[k] = roll[k + 1];
						roll[k + 1] = temp;

						float temp2 = mid[k];
						mid[k] = mid[k + 1];
						mid[k + 1] = temp2;

						float temp3 = final[k];
						final[k] = final[k + 1];
						final[k + 1] = temp3;

						int temp4 = classs[k];
						classs[k] = classs[k + 1];
						classs[k + 1] = temp4;

						char temp5 = grade[k];
						grade[k] = grade[k + 1];
						grade[k + 1] = temp5;
					}
				}
			}





			for (int i = 0; i < currentsize; i++) {
				cout << roll[i] << "  " << mid[i] << "   " << final[i] << "   " << classs[i] << "   " << grade[i] << endl;
			}


		}
		else if (choice == 4) {
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (mid[k]< mid[k + 1]) {
						int temp = roll[k];
						roll[k] = roll[k + 1];
						roll[k + 1] = temp;

						float temp2 = mid[k];
						mid[k] = mid[k + 1];
						mid[k + 1] = temp2;

						float temp3 = final[k];
						final[k] = final[k + 1];
						final[k + 1] = temp3;

						int temp4 = classs[k];
						classs[k] = classs[k + 1];
						classs[k + 1] = temp4;

						char temp5 = grade[k];
						grade[k] = grade[k + 1];
						grade[k + 1] = temp5;
					}
				}
			}





			for (int i = 0; i < currentsize; i++) {
				cout << roll[i] << "  " << mid[i] << "   " << final[i] << "   " << classs[i] << "   " << grade[i] << endl;
			}


		}
		else {
			cout << "incorrect input" << endl;
		}
	}
}



