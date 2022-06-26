#include<bits/stdc++.h>
//Pham Huy Ha Thai - 20204784
using namespace std;
const int MAX = 10000;
int n, r;
int price[MAX][MAX];
int x[MAX];
bool visited[MAX];
vector<int> vt;
int minPrice;
int sumPrice;
int start, finalDes, numPoint;
//input du lieu
void data(){
    cin >> n >> r;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++){
            cin >> price[i][j];
        }
}
//check dia diem da di qua/ khong the den
bool check(int a, int i){
    if(visited[vt[i]]) return false;
    if(price[x[a-1]][vt[i]] == 0) return false;
    return true;
}
//tinh ket qua
void result(){
    if(price[x[numPoint-2]][finalDes] == 0) return;
    minPrice = min(minPrice, sumPrice + price[x[numPoint-2]][finalDes]);
}
//quay lui chi phi min
void TRY(int a){
    for(int i=1; i<numPoint-1; i++){
        if(check(a, i)){
            visited[vt[i]] = true;
            sumPrice += price[x[a-1]][vt[i]];

            x[a] = vt[i];
            if(a == numPoint-2) result();
            else TRY(a+1);

            visited[vt[i]] = false;
            sumPrice -= price[x[a-1]][vt[i]];
        }
    }
}

int main(){
    string str;
    data(); getline(cin,str);

    while(r > 0){
        minPrice = INT_MAX;
        sumPrice = 0;

        getline(cin, str);
        while (!str.empty()){
            stringstream convert(str.substr(0, str.find(" ")));
            int tmp = 0;
            convert >> tmp;
            vt.push_back(tmp - 1);

            if (str.find(" ") > str.size()){
                break;
            } else {
                str.erase(0, str.find(" ") + 1); // Update string
            }
        }

        //khoi tao cac du lieu can thiet truoc khi quay lui
        start = vt[0]; // diem bat dau dau
        finalDes = vt[vt.size()-1]; // diem dich
        numPoint = vt.size(); // so diem phai di qua
        x[0] = start; x[numPoint-1] = finalDes;
        for(int i=0; i<n; i++)
            visited[i] = false;

        TRY(1);

        //xuat ket qua
        if(minPrice == INT_MAX) cout << "0" << endl;
        else cout << minPrice << endl;

        //xoa vector va chuyen sang khach tiep theo
        vt.erase(vt.begin(), vt.end());
        r--;
    }
}