//Pham Huy Ha Thai - 20204784
#include<bits/stdc++.h>
using namespace std;
const int MAX = 100;
int n, k;
int m;
vector<vector<int> > vt; // chuyen tu luu tru cac canh sang luu tru danh sach ke
int x[MAX];
bool visited[MAX];
int res;
//input du lieu
void data(){
    cin >> n >> k;
    cin >> m;
    vt.resize(n+1);
    for(int i=0; i<m; i++){
        int temp1, temp2;
        cin >> temp1 >> temp2;

        vt[temp1-1].push_back(temp2-1); // dinh tmp2 ke voi dinh tmp1
        vt[temp2-1].push_back(temp1-1); // dinh tmp1 ke voi dinh tmp2
    }

    for(int i=0; i<n; i++){
        visited[i] = false;
    }
    res = 0;
}
//kiem tra dinh da den chua va co duong di toi dinh do khong
bool check(int a, int i){
    if(a == 0) return true;
    if(visited[i]) return false;

    int index = 0;
    for(int j=0; j<vt[x[a-1]].size(); j++){
        if(i == vt[x[a-1]][j]) index++;
    }
    if(index == 0) return false;


    return true;
}

void sol(){
    res++;
}
//ham quay lui tim so duong di co do dai k
void TRY(int a){
    for(int i=0; i<n; i++){
        if(check(a, i)){
            visited[i] = true;
            x[a] = i;

            if(a == k) sol();
            else TRY(a+1);

            visited[i] = false;
        }
    }
}

int main(){
    data();
    TRY(0);
    cout << res / 2;
}