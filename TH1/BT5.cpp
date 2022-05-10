#include<iostream>

using namespace std;

double* maximum(double* a, int size){
    //Pham Huy Ha Thai - 20204784
    double *max;
    max = a;
    if (a==NULL) return NULL;


    /*****************/
    for (int i = 0; i< size; i++) { //dung vong lap for de duyet mang
        if (a[i] > *max) max = &a[i]; //neu phan tu nao lon hon gia tri max thi gan dia chi cua no cho max
    }
    return max; //tra ve dia chi phan tu lon nhat mang
    /*****************/
}

int main() {
    cout << "Pham Huy Ha Thai \nMSSV: 20204784\n";
    double arr[] = {1, 5, 8, 100, 0};
    cout << maximum(arr, 5);
}