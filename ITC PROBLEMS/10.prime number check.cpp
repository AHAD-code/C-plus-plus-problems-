#include <iostream>
using namespace std;

int main() {
    int num, flag = 1;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) flag = 0;
    else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";

    return 0;
}
