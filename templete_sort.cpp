//
// Created by Luojiawei on 24-10-12.
//


#include "iostream"
using namespace std;

template<class T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void mySort(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[max])
                max = j;
        }
        mySwap(arr[i], arr[max]);
    }
}

int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int num = sizeof(arr) / sizeof(arr[0]);
    mySort(arr, num);
    for (int i = 0; i < num; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    char arr2[] = "adgfafgfa";
    int num2 = sizeof(arr2) / sizeof(char);
    mySort(arr2, num2);
    for (int i = 0; i < num2 - 1; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}