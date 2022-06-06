#include <stdio.h>
#include <math.h>

float get_hypotenuse(float x, float y) {  //ham tra ve canh huyen
    //Pham Huy Ha Thai - 20204784
    /*****************/
    return sqrtf(powf(x, 2) + powf(y, 2)); //tinh canh huyen theo pytago
    /*****************/
}

int main(){
    float x, y;
    scanf("%f%f", &x, &y); // nhap canh
    
    float z = get_hypotenuse(x, y);
    printf("z = %.2f\n", z); //xuat canh huyen
    
    return 0;
}