//X = {1, 2, 3, 4, 16, 26,...}
//Y = {2, 4, 6, 8, 14, 31,...}
#include<iostream>

using namespace std;

int X(int n);
int Y(int n);

int X(int n) {
    if (n <= 4) return n;
    return X(n-4) + Y(n-3) + X(n-2) + Y(n-1);
}

int Y(int n) {
    if (n <= 4) return 2*n;
    return Y(n-4) + X(n-3) + Y(n-2) + X(n-1);
}

int sumX(int n) {
    if (n <= 1) return X(1);
    return X(n) + sumX(n-1);
    //Khu de quy
    // int tongX = 0;
    // for (int i = 1; i<=n; i++) {
    //     tongX += X(i);
    // }
    // return tongX;
}

int sumY(int n) {
    if (n <= 1) return Y(1);
    return Y(n) + sumY(n-1);
    //Khu de quy
    // int tongY = 0;
    // for (int i = 1; i<=n; i++) {
    //     tongY += Y(i);
    // }
    // return tongY;
}

int sumXandY(int n) {
    return sumX(n) + sumY(n);
}

int main() {
    cout << X(12) << "\n";
    cout << Y(12) << "\n";
    cout << sumXandY(12);
}