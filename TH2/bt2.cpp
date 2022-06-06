#include <stdio.h>

void rotate(int &x, int &y, int &z) { //ham hoan vi so
    //Pham Huy Ha Thai - 20204784
    /*****************/ 
    int tmp = x;
    x = y;
    y = z;
    z = tmp;
    /*****************/
}

int main() {
    int x, y, z;
    
    //# Nhập 3 số nguyên
    /*****************/
    scanf("%d %d %d", &x, &y, &z);
    /*****************/
    
    printf("Before: %d, %d, %d\n", x, y, z); //xuat 3 so nhap
    rotate(x, y, z);
    printf("After: %d, %d, %d\n", x, y, z); //xuat 3 so hoan vi
    
    return 0;
}