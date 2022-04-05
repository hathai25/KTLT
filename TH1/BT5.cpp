#include<iostream>

using namespace std;

double* maximum(double* a, int size){
    double *max;
    max = a;
    if (a==NULL) return NULL;
    for (int i = 0; i< size; i++) {
        if (a[i] > *max) max = &a[i];
    }
    return max;
}

int main() {
    double arr[] = {1, 5, 8, 100, 0};
    cout << maximum(arr, 5);
}