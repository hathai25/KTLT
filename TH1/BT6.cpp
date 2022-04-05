#include<iostream>

using namespace std;

void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;
    while (l < r) {
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
    }
    for (int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    while (l < r) {
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
    }
    for (int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {9, -1, 4, 5, 7};
    reversearray(arr, 5);
    cout << "\n";
    ptr_reversearray(arr, 5);
}