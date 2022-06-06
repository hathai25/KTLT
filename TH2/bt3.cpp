#include <stdio.h>

//# Viết hàm get_value
/*****************/
//Pham Huy Ha Thai - 20204784
int get_value(int x, int a=2, int b=1, int c=0){
    int S = a*x*x + b*x + c; 
    return S;
}
/*****************/

int main(){
    int x;
    scanf("%d", &x);
    
    int a = 2; //# giá trị mặc định của a
    int b = 1; //# giá trị mặc định của b
    int c = 0; //# giá trị mặc định của c
    
    //# Nhập 3 số nguyên a, b, c từ bàn phím
    /*****************/
    scanf("%d %d %d", &a, &b, &c);
    /*****************/
    
    printf("a=2, b=1, c=0: %d\n", get_value(x));  //xuat ket qua voi a, b, c ngam dinh
    printf("a=%d, b=1, c=0: %d\n", a, get_value(x, a));  //xuat ket qua voi a nhap tu ban phim, b, c ngam dinh
    printf("a=%d, b=%d, c=0: %d\n", a, b, get_value(x, a, b));  //xuat ket qua voi a, b nhap tu ban phim, c ngam dinh
    printf("a=%d, b=%d, c=%d: %d\n", a, b, c, get_value(x, a, b, c));  //xuat ket qua voi a, b ,c nhap tu ban phim
    
    return 0;
}