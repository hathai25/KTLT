#include<bits/stdc++.h>
using namespace std;
const int  MAX = 1000;
int n, k1, k2;
int x[MAX];
int no0 = 0, no1 = 0;
//nhap input
void data(){
    cin >> n >> k1 >> k2;
}
//check ngay nghi hop le
bool check(int  a, int  i){
    if(a==1) return true;
    else {
        //kiem tra da nghi qua so ngay chua
        if(i==0){
            if(x[a-1] == 0) return false;
            else { // x[a-1] == 1
                if(no1<k1) return false;
            }
        } else { // i == 1
            if(x[a-1] == 0){
                if(n-a+1 < k1) return false;
            } else {
                if(no1>=k2) return false;
            }
        }

        return true;
    }
}
//in ket qua
void printSolution(){
    for(int i=1; i<=n; i++)
        cout << x[i];
    cout << endl;
}

void TRY(int a){
    for(int i=0; i<=1; i++){
        if(check(a,i)){
            x[a] = i; // ngay thu a lam viec hoac khong lam viec
            int pre = no1;
            if(i == 1){
                if(x[a-1] == 1) no1++;
                else no1 = 1;
            } else {
                no1 = 0;
            }

            if(a==n) printSolution();
            else TRY(a+1);

            no1 = pre;
        }
    }
}

int main(){
    data();
    TRY(1);
    return 0;
}