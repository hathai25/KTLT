#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int n;
int X[100], Y[100]; //# Lưu tọa độ các bước di chuyển của quân mã
int mark[100][100]; //# Đánh dấu vị trí các ô mà quân mã đã di chuyển qua

//# Mảng hx, hy mô tả 8 vị trí quân mã có thể di chuyển kể từ vị trí hiện tại
const int hx[] = {1, 1, 2, 2, -1, -1, -2, -2};
const int hy[] = {2, -2, 1, -1, 2, -2, 1, -1};

//# In ra dãy các di chuyển tìm được
void print_sol(){
    for (int j = 1; j <= n * n; ++j)
        printf("(%d %d)\n", X[j], Y[j]);
    exit(0);
}
//kiem tra vi tri cua ma co hop le khong
bool check(int xx, int yy){
    if(mark[xx][yy] == 1) return false;
    if(xx < 1 || xx > n || yy < 1 || yy > n) return false;
    return true;
}

//# Thuật toán quay lui
void TRY(int k){
    //Pham Huy Ha Thai - 20204784
    for(int i = 0; i < 8; i++){
        //tao buoc di cho ma
        int xx = X[k-1] + hx[i];
        int yy = Y[k-1] + hy[i];
        /*****************/
        if(check(xx,yy)){
            //neu buoc di hop le thi gan nuoc di cho ma
            mark[xx][yy] = 1;
            X[k] = xx;
            Y[k] = yy;
            //kiem tra so o ma da di qua bang kich thuoc ban co chua
            if(k == n*n) print_sol();
            else TRY(k+1);

            mark[xx][yy] = 0;
        }
        /*****************/
    }
}

int main(){
    cin >> n;
    mark[1][1] = 1;
    X[1] = Y[1] = 1;
    TRY(2);
    return 0;
}