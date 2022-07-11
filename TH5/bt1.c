#include <stdio.h>

int x[100], mark[100], n;

void print(){
    for (int i = 1; i <= n; ++i) printf("%d ", x[i]);
    printf("\n"); //loi nham ten ham printf
}

void process(int i) {
    if (i > n){
        //loi goi sai ten ham
        print();
        return;
    }
    for (int j = 1; j <= n; ++j)
        if (!mark[j]){
            mark[j] = 1;
            x[i] = j;
            process(i+1);
            mark[j] = 0;
        }
}

int main() {
    printf("Ho Va Ten: Pham Huy Ha Thai\n");
    printf("MSSV: 20204784\n\n");
    n = 5;
    process(1);
    return 0;
}