#include <stdio.h>

int cube(int x) {
    //# trả về lập phương của x
    /*****************/
    return x*x*x;
    /*****************/
}

//# viết hàm tính lập phương của một số kiểu double
/*****************/
double cube(double x) {
    return x*x*x;
}
/*****************/

int main() {
    //Pham Huy Ha Thai - 20204784
    int n;
    double f;
    scanf("%d %lf", &n, &f); //nhap so n va f
    
    printf("Int: %d\n", cube(n)); // xuat lap phuong n
    printf("Double: %.2lf\n", cube(f));  // xuat lap phuong f
    
    return 0;
}