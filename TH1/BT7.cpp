#include <stdio.h>

int *a;
int n, tmp;

int main(){
    printf("Ho Va Ten: Pham Huy Ha Thai\n");
    printf("MSSV: 20204784\n\n");
    //Pham Huy Ha Thai - 20204784
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    //#Allocate memory
    /*****************/
    a = new int[n]; //cap phat bo nho dong cho mang a
    /*****************/
    for(int i = 0; i < n; i++)
        scanf("%d", a + i); 
    
    printf("The input array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
    
    //#Sort array
    /*****************/
    for (int i = 0; i<n; i++) {
        for (int j = i+1; j<n; j++) {
            if (*(a+i) > *(a+j)) { 
                int tmp;
                tmp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tmp;
            }
            /*thuc hien thuat toan bubble sort
            , so sanh 2 phan tu canh nhau,
            neu phan tu truoc lon hon phan tu sau thi doi cho */
        }
    }
    /*****************/
    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
    
    delete [] a;
    return 0;
}