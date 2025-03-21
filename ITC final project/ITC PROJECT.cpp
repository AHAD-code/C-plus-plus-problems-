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
	char slection[size];

	for (int i = 0; i < 50; i++) {

		roll[i] = 1 + 100 + i;
		mid[i] = i * 2 % 50;
		final[i] = i + 30 % 100;
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
	cout << "       MENU    " << endl;
	cout << "1 .enter for display roll number sorting in accending order" << endl;
	cout << "2 .enter for display roll number sorting in decending order" << endl;
	cout << "3 .enter for display mid marks sorting in accending order:" << endl;
	cout << "4 .enter for display mid marks sorting in decending order:" << endl;
	cout << "5 .enter for display final marks sorting in accending order:" << endl;
	cout << "6 .enter for display final marks sorting in desending order" << endl;
	cout << "7 .enter for display grade sorting in accending order" << endl;
	cout << "8 .enter for display grade sorting in desending order" << endl;
	cout << "9 .enter for add student " << endl;
	cout << "10.enter for deleting a student record" << endl;
	cout << "11.enter for display students grater than x final marks in decending order" << endl;
	cout << "12.enter for display students grater than x final marks in accending order" << endl;
	cout << "13.enter for  display students less than x in final marks in decending order" << endl;
	cout << "14.enter for display students less than x in final marks in accending  order" << endl;
	cout << "15.enter for display students greater than x grade in decending order" << endl;
	cout << "16.enter for display students greater than x grade in accending order" << endl;
	cout << "17.enter for display students less than or equal x grade in decending order" << endl;
	cout << "18.enter for display students less than or equal x grade in accending order" << endl;
	cout << "E/e.enter for exit program:" << endl;
	cout << "enter your choice:";


	while (cin >> slection){


		


		if (slection[0] == '1' && slection[1] == '\0') {

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





			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			cout << "-----------------------------------------------------" << endl;
			for (int i = 0; i < currentsize; i++) {

				cout << "  " << roll[i] << "           " << mid[i] << "         " << final[i] << "           " << classs[i] << "        " << grade[i] << endl;
			}


		}
		else if (slection[0] == '2' && slection[1] == '\0') {
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




			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {

				cout << roll[i] << "            " << mid[i] << "          " << final[i] << "         " << classs[i] << "           " << grade[i] << endl;
			}




		}

		else if (slection[0] == '9' && slection[1] == '\0') {
			cout << "enter roll number";
			
			while (cin >> roll[currentsize]) {
				if (roll[currentsize] >= 101 && roll[currentsize] <= 200) {
					
					break;
				}
				
				else {
					cout << "enter unique roll number(betweeen:101-200):";
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

				while (cin >> mid[currentsize]) {
					if (mid[currentsize] >= -1 && mid[currentsize] <= 50) {
						break;
					}
					else {
						cout << "enter marks between(0-50)";
					}
				}
				cout << "enter final marks:";
				while (cin >> final[currentsize]) {
					if (final[currentsize] >= -1 && final[currentsize] <= 100) {
						break;
					}
					else {
						cout << "inccorect input enter marks between(0-100)";
					}
				}

				cout << "enter class:";
				while (cin >> classs[currentsize]) {
				
					if (classs[currentsize] >= 0 && classs[currentsize] <= 10) {
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
		else if (slection[0] == '3' && slection[1] == '\0') {
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





			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {

				cout << roll[i] << "            " << mid[i] << "          " << final[i] << "         " << classs[i] << "           " << grade[i] << endl;
			}




		}
		else if (slection[0] == '4' && slection[1] == '\0') {
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (mid[k] < mid[k + 1]) {
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





			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {

				cout << roll[i] << "            " << mid[i] << "          " << final[i] << "         " << classs[i] << "           " << grade[i] << endl;
			}




		}
		else if (slection[0] == '5' && slection[1] == '\0') {
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (final[k] > final[k + 1]) {
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




			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {

				cout << roll[i] << "            " << mid[i] << "          " << final[i] << "         " << classs[i] << "           " << grade[i] << endl;
			}




		}

		else if (slection[0] == '6' && slection[1] == '\0') {
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (final[k] < final[k + 1]) {
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




			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {

				cout << roll[i] << "            " << mid[i] << "          " << final[i] << "         " << classs[i] << "           " << grade[i] << endl;
			}



		}
		else if (slection[0] == '8' && slection[1] == '\0') {
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (grade[k] > grade[k + 1]) {
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





			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {

				cout << roll[i] << "            " << mid[i] << "          " << final[i] << "         " << classs[i] << "           " << grade[i] << endl;
			}




		}
		else if (slection[0] == '7' && slection[1] == '\0') {
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (grade[k] < grade[k + 1]) {
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





			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {

				cout << "  " << roll[i] << "           " << mid[i] << "         " << final[i] << "        " << classs[i] << "          " << grade[i] << endl;
			}




		}

		else if (slection[0] == '1' && slection[1] == '1' && slection[2] == '\0') {
			float num;

			cout << "enter final marks:";

			while (true) {

				cin >> num;
				if (num <= 100 && num >= 0) {
					break;
				}
				cout << "enter correct marks(0-100):";
			}
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (final[k] < final[k + 1]) {
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


			bool f = false;

			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {
				if (final[i] > num) {

					f = true;

					cout << roll[i] << "            " << mid[i] << "          " << final[i] << "         " << classs[i] << "           " << grade[i] << endl;
				}
			}
			if (f == false) {
				cout << "no student have greater marks than" << num << endl;
			}



		}
		else if (slection[0] == '1' && slection[1] == '2' && slection[2] == '\0') {
			float num;
			cout << "enter final marks:";
			while (true) {

				cin >> num;
				if (num <= 100 && num >= 0) {
					break;
				}
				cout << "enter correct marks(0-100):";
			}
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {
					if (final[k] > final[k + 1]) {
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



			bool f = false;

			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			cout << "-----------------------------------------------------" << endl;
			for (int i = 0; i < currentsize; i++) {
				if (final[i] > num) {
					f = true;
					cout << "  " << roll[i] << "           " << mid[i] << "         " << final[i] << "           " << classs[i] << "        " << grade[i] << endl;
				}
			}
			if (f == false) {
				cout << "No student have marks greater than" << num << endl;
			}



		}
		else if (slection[0] == '1' && slection[1] == '3' && slection[2] == '\0') {
			float num;
			cout << "enter final marks:";
			while (true) {

				cin >> num;
				if (num <= 100 && num >= 0) {
					break;
				}
				cout << "enter correct marks(0-100):";
			}
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (final[k] < final[k + 1]) {
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


			bool f = false;

			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {
				if (final[i] <= num) {

					f = true;

					cout << roll[i] << "            " << mid[i] << "          " << final[i] << "         " << classs[i] << "           " << grade[i] << endl;
				}
			}
			if (f == false) {
				cout << "no student have greater marks than" << num << endl;
			}



		}
		else if (slection[0] == '1' && slection[1] == '4' && slection[2] == '\0') {
			float num;
			cout << "enter final marks:";
			while (true) {

				cin >> num;
				if (num <= 100 && num >= 0) {
					break;
				}
				cout << "enter correct marks(0-100):";
			}
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {
					if (final[k] > final[k + 1]) {
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



			bool f = false;

			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			cout << "-----------------------------------------------------" << endl;
			for (int i = 0; i < currentsize; i++) {
				if (final[i] <= num) {
					f = true;
					cout << "  " << roll[i] << "           " << mid[i] << "         " << final[i] << "           " << classs[i] << "        " << grade[i] << endl;
				}
			}
			if (f == false) {
				cout << "No student have marks greater than" << num << endl;
			}



		}
		else if (slection[0] == '1' && slection[1] == '5' && slection[2] == '\0') {
			char num;

			cout << "enter grade in capital:";
			while (true) {
				cin >> num;
				if (num >= 'A' && num <= 'F') {
					break;
				}
				cout << "enter correct grade (A TO F):";
			}

			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (grade[k] > grade[k + 1]) {
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


			bool f = false;

			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {
				if (grade[i] < num) {

					f = true;

					cout << roll[i] << "            " << mid[i] << "          " << final[i] << "         " << classs[i] << "           " << grade[i] << endl;
				}
			}
			if (f == false) {
				cout << "no student have greater grade than" << num << endl;
			}



		}
		else if (slection[0] == '1' && slection[1] == '6' && slection[2] == '\0') {
			char num;

			cout << "enter grade in capital:";
			while (true) {
				cin >> num;
				if (num >= 'A' && num <= 'F') {
					break;
				}
				cout << "enter correct grade (A TO F):";
			}
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {
					if (grade[k] < grade[k + 1]) {
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



			bool f = false;

			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			cout << "-----------------------------------------------------" << endl;
			for (int i = 0; i < currentsize; i++) {
				if (grade[i] < num) {
					f = true;
					cout << "  " << roll[i] << "           " << mid[i] << "         " << final[i] << "           " << classs[i] << "        " << grade[i] << endl;
				}
			}
			if (f == false) {
				cout << "No student have grade greater than" << num << endl;
			}



		}
		else if (slection[0] == '1' && slection[1] == '7' && slection[2] == '\0') {
			char num;

			cout << "enter grade in capital:";
			while (true) {
				cin >> num;
				if (num >= 'A' && num <= 'F') {
					break;
				}
				cout << "enter correct grade (A TO F):";
			}
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {

					if (grade[k] > grade[k + 1]) {
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


			bool f = false;

			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			for (int i = 0; i < currentsize; i++) {
				if (grade[i] >= num) {

					f = true;

					cout << roll[i] << "            " << mid[i] << "          " << final[i] << "         " << classs[i] << "           " << grade[i] << endl;
				}
			}
			if (f == false) {
				cout << "no student have greater grade than" << num << endl;
			}



		}
		else if (slection[0] == '1' && slection[1] == '8' && slection[2] == '\0') {
			char num;

			cout << "enter grade in capital:";
			while (true) {
				cin >> num;
				if (num >= 'A' && num <= 'F') {
					break;
				}
				cout << "enter correct grade (A TO F):";
			}
			for (int j = 0; j < currentsize; j++) {
				for (int k = 0; k < currentsize - j - 1; k++) {
					if (grade[k] < grade[k + 1]) {
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



			bool f = false;

			cout << "ROLL NUMBER" << "  " << "MID MARKS" << "  " << "FINAL MARKS" << "   " << "CLASS" << "   " << "GRADE" << endl;
			cout << "-----------------------------------------------------" << endl;
			for (int i = 0; i < currentsize; i++) {
				if (grade[i] >= num) {
					f = true;
					cout << "  " << roll[i] << "           " << mid[i] << "         " << final[i] << "           " << classs[i] << "        " << grade[i] << endl;
				}
			}
			if (f == false) {
				cout << "No student have grade greater than" << num << endl;
			}



		}
		else if (slection[0] == '1' && slection[1] == '0' && slection[2] == '\0') {
			int delet;
			cout << "enter roll number";
			cin >> delet;

			int index;
			for (int i = 0; i < currentsize; i++) {
				if (delet == roll[i]) {
					index = i;
				}
			}
			for (int i = index; i < currentsize - 1; i++) {
				roll[i] = roll[i + 1];
				mid[i] = mid[i + 1];
				final[i] = final[i + 1];
				classs[i] = classs[i + 1];
				grade[i] = grade[i + 1];

			}
			currentsize--;
		}
		else if (slection[0] == 'e' || slection[0] == 'E' && slection[1] == '\0') {
			cout << "program exit successfully";
			break;
		}
		else {


			cout << "wrong input" << endl;




		}
		cout << "       MENU    " << endl;
		cout << "1 .enter for display roll number sorting in accending order" << endl;
		cout << "2 .enter for display roll number sorting in decending order" << endl;
		cout << "3 .enter for display mid marks sorting in accending order:" << endl;
		cout << "4 .enter for display mid marks sorting in decending order:" << endl;
		cout << "5 .enter for display final marks sorting in accending order:" << endl;
		cout << "6 .enter for display final marks sorting in desending order" << endl;
		cout << "7 .enter for display grade sorting in accending order" << endl;
		cout << "8 .enter for display grade sorting in desending order" << endl;
		cout << "9 .enter for add student " << endl;
		cout << "10.enter for deleting a student record" << endl;
		cout << "11.enter for display students grater than x final marks in decending order" << endl;
		cout << "12.enter for display students grater than x final marks in accending order" << endl;
		cout << "13.enter for  display students less than x in final marks in decending order" << endl;
		cout << "14.enter for display students less than x in final marks in accending  order" << endl;
		cout << "15.enter for display students greater than x grade in decending order" << endl;
		cout << "16.enter for display students greater than x grade in accending order" << endl;
		cout << "17.enter for display students less than or equal x grade in decending order" << endl;
		cout << "18.enter for display students less than or equal x grade in accending order" << endl;
		cout << "E/e.enter for exit program:" << endl;
		cout << "enter your choice:";


	}
	return 0;
}