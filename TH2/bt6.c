#include <stdio.h>
//ham xuat 
void print(int n) {
    printf("n=%d\n", n);
}
//ham xu ly so le
int mul3plus1(int n) {
    return n * 3 + 1;
}
//ham xu ly so chan
int div2(int n) {
    return n / 2;
}
// khai báo các tham số cho các con trỏ hàm odd, even và output
void simulate(int n, /*****************/ int (*odd)(int), int (*even)(int), void (*output)(int)/*****************/)  {
    (*output)(n);
    if (n == 1) return;
    if (n % 2 == 0) {
        n = (*even)(n);
    } else {
        n = (*odd)(n);
    }
    simulate(n, odd, even, output);
}

int main() {
    int (*odd)(int) = NULL; //khoi tao 2 con tro ham
    int (*even)(int) = NULL;

    //Pham Huy Ha Thai - 20204784
    odd = mul3plus1;
    even = div2;
    /*****************/

    int n;
    scanf("%d", &n);
    simulate(n, odd, even, print);

    return 0;
}
