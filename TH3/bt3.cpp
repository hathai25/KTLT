#include <bits/stdc++.h>
using namespace std;
#define MAX 100  

int n, c[MAX][MAX]; //# số thành phố và ma trận chi phí
int cmin = INT_MAX; //# chi phí đi lại nhỏ nhất giữa hai thành phố khác nhau
int best = INT_MAX; //# tổng chi phí nhỏ nhất cần tìm, ban đầu đặt bằng giá trị vô cùng lớn INT_MAX = 2^31-1
int curr; //# tổng chi phí tới thời điểm hiện tại
int mark[MAX]; //# đánh dấu những thành phố đã đi
int x[MAX]; //# lưu giữ các thành phố đã đi

//# Đọc dữ liệu vào
void input(){
    cin >> n;
    //nhap ma tran chi phi
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j){
            cin >> c[i][j];
            //check chi phi di lai khong vuot qua INT_MAX
            if (c[i][j] > 0) cmin = min(cmin, c[i][j]);
        }
    //
    for (int i = 0; i<MAX; i++) 
        mark[i] = 0;
    curr = 0;
}
//check thanh pho da visited chua
bool check(int k, int i){
    if(mark[i] == 1) return false;
    return true;
}
//lay chi phi nho nhat
void solution(){
    best = min(best,curr);
}

//# Thuật toán quay lui
void TRY(int k){
    //Pham Huy Ha THai - 20204784
    for(int i = 2; i <= n; i++){
        /*****************/
        if(check(k,i)){
            //visited thi danh dau da tham
            mark[i] = 1;
            //cong tong chi phi
            curr += c[x[k-1]][i];

            x[k] = i;
            //neu da di het thanh pho
            if(k == n) {
                curr += c[x[n]][1];
                solution();
                curr -= c[x[n]][1];
            }
            //neu chua di het thanh pho
            else TRY(k+1);

            mark[i] = 0;
            curr -= c[x[k-1]][i];
        }
        /*****************/
    }
}

int main() {
    input();
    x[1] = 1;
    TRY(2);
    cout << best;
    return 0;
}