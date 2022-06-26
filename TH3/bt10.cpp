#include<bits/stdc++.h>
using namespace std;
const int MAX = 20;
int N, H;
int x[MAX];
int S[MAX]; // Xau mac dinh de so sanh
//input du lieu
void data(){
    cin >> N >> H;
    for(int i=0; i<N; i++)
        S[i] = 0;
    for(int i=0; i<N; i++)
        x[i] = 0;
}

//kiem tra 2 co khoang cach Hamming la bnh
int rangeHamming(int str1[], int str2[]){
    int lens = N;
    int count = 0;
    for(int i=0; i<lens; i++){
        if(str1[i] != str2[i]) count++;
    }
    return count;
}
//in ket qua
void printSolution(){
    if(rangeHamming(x,S) == H){
        for(int i=0; i<N; i++)
            cout << x[i];
        cout << endl;
    }
}
//backtrack
void TRY(int a){
    for(int i=0; i<=1; i++){
        x[a] = i;
        if(a == N-1) printSolution();
        else
            TRY(a+1);
    }
}

int main(){
    int T;
    cin >> T;
    while(T > 0){
        data();
        TRY(0);
        T--;
    }
}