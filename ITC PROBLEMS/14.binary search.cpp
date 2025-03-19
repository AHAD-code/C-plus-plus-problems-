#include<iostream>
using namespace std;
int main() {
    const  int size = 6;
    int arr[size];
    cout << "eneter numbers:";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int start =0, end =size-1, mid, val;
    cout << "enter value fot search";
    cin >> val;

    while (start < end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == val)
        {
           cout<<"found";
            break;
        }
        else if (val < arr[mid])
        {
            end = mid - 1;
        }
        else if (val > arr[mid])
        {
            start = mid + 1;
        }
    }
}