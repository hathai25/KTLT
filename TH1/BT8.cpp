#include<iostream>

using namespace std;
//Pham Huy Ha Thai - 20204784

void allocate_mem(int ***mt, int m, int n){
    //#Allocate memory for the matrix
    /*****************/
    *mt = new int *[m]; //cap phat mot mang dong cho con tro mt
    for(int i=0; i<m; i++){
        (*mt)[i] = new int[n]; //moi phan tu trong mang mt cap phat dong them mot mang 
    }
    /*****************/
}

void input(int **mt, int m, int n){
    //#Input elements of the matrix
    /*****************/
   for (int i = 0; i < m; i++) {
       for (int j = 0; j<n; j++) {
           printf("mt[%d][%d] = ", i, j);
           cin >> mt[i][j]; //nhap phan tu mang
       }
   }
   /*****************/
}

void output(int **mt, int m, int n){
    //# Print all elements of the matrix
    /*****************/
   for (int i = 0; i < m; i++) {
       for (int j = 0; j<n; j++) {
           cout << mt[i][j] << " "; //in phan tu tung hang
       }
       cout << "\n"; //xuong dong khi het hang
   }
   /*****************/
}

int process(int **mt, int m, int n){
    int tong = 0;
        //# Calculate the sum of all even elements in the matrix
        /*****************/       
        for (int i = 0; i < m; i++) {
            for (int j = 0; j<n; j++) {
                if (mt[i][j] % 2 == 0) tong += mt[i][j];
            } //duyet mang, tim phan tu chan roi cong vao tong
        }
        /*****************/
    return tong;
}

void free_mem(int **mt, int m, int n){
    //# Free memory
    /*****************/
   for (int i = 0; i<m; i++) {
       delete [] mt[i]; //giai phong bo nho tung phan tu trong mt
   }
   delete [] mt; //giai phong bo nho mt
   /*****************/
}

int main() {
    int m, n, **mt;
    printf("Enter m, n = ");
    scanf("%d%d", &m, &n);
    allocate_mem(&mt, m, n);
    input(mt, m, n);
    output(mt, m, n);
    printf("The sum of all even elements is %d", process(mt, m, n));
    free_mem(mt, m, n);
    return 0;
}