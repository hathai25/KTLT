#include<iostream>

using namespace std;

int counteven(int* arr, int size){
    int count = 0;
    for (int i = 0; i< size; i++) {
        if (arr[i] % 2 == 0) count++;
    }
    return count;    
}

int main() {
    int a[] = {1, 2, 5, 8, 9};
    cout << counteven(a, 5);
}