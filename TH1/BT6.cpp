#include<iostream>

using namespace std;

void reversearray(int arr[], int size){
    //Pham Huy Ha Thai - 20204784
    int l = 0, r = size - 1, tmp;
    /*****************/
    while (l < r) { 
        tmp = arr[l]; 
        arr[l] = arr[r]; 
        arr[r] = tmp; 
        l++; 
        r--; 
        /* su dung bien l index tu dau mang
            bien r index cuoi mang
            dao gia tri phan tu l va r cua mang
            tang l va giam r roi lap lai
        */
    }
    /*****************/
}

void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    /*****************/
    while (l < r) {
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
        /* su dung bien l index tu dau mang
            bien r index cuoi mang
            dao gia tri phan tu l va r cua mang
            tang l va giam r roi lap lai
        */
    }
    /*****************/
}

int main() {
    int arr[] = {9, -1, 4, 5, 7};
    reversearray(arr, 5);
    cout << "\n";
    ptr_reversearray(arr, 5);
}