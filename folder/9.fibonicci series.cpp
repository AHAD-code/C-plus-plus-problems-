#include <iostream>
using namespace std;

int main() {
    int N, t1 = 0, t2 = 1, nextTerm;

    cout << "Enter the number of terms: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}
