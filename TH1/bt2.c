#include <stdio.h>

int main() {
  //Pham Huy Ha Thai - 20204784
    int x, y, z;

    int *ptr;

    scanf("%d %d %d", &x, &y, &z);

    printf("Here are the values of x, y, and z:\n");

    printf("%d %d %d\n", x, y, z);



    /*****************/

    int add = 100; //khoi tao bien add = 100
    ptr = &add; // gan dia chi cua bien add cho con tro
    x += *ptr;  //cong x voi gia tri ma con tro tro toi
    y += *ptr;  //cong y voi gia tri ma con tro tro toi
    z += *ptr;  //cong z voi gia tri ma con tro tro toi

    /*****************/

    

    printf("Once again, here are the values of x, y, and z:\n");

    printf("%d %d %d\n", x, y, z);

    return 0;

}   