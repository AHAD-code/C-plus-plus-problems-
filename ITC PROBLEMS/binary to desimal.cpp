#include<iostream>
using namespace std;
int main()
{
	int num, rem, binary=0, power=1;
	cout << "enter number";
	cin >> num;
	for (int i = 1; i < num; i++){
		rem = num % 2;
		binary = binary + rem * power;
		num = num / 2;
		power = power * 10;


	}
	cout << binary;






}