#include<iostream>

using namespace std;

int counteven(int* arr, int size){
    int count = 0; //tao bien de dem so phan tu chan
    for (int i = 0; i< size; i++) { //dung vong lap for de duyet mang
        if (arr[i] % 2 == 0) count++; //neu gap phan tu chan thi tang so dem
    }
    return count; //tra ve so luong phan tu chan
}

int main() {
    int a[] = {1, 2, 5, 8, 9};
    cout << counteven(a, 5);
}