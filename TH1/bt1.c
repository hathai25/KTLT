# include <stdio.h>
int main(){
    //Pham Huy Ha Thai - 20204784
    printf("Ho Va Ten: Pham Huy Ha Thai");
    printf("MSSV: 20204784 ");
    int x, y, z;
    int* ptr;
    printf("Enter three integers: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\nThe three integers are:\n");
    ptr = &x;
    printf("x = %d\n", *ptr);
    /*****************/
    ptr = &y; //gan con tro toi dia chi y
    printf("y = %d\n", *ptr);
    ptr = &z; //gan con tro toi dia chi z
    printf("z = %d\n", *ptr);
    /*****************/
    
    return 0;
}
