#include<iostream>

using namespace std;
//Pham Huy Ha Thai - 20204784
int lucas(int n) {
    if (n == 0) return 2;
    if (n == 1) return 1;
    return lucas(n-1) + lucas(n-2);
}

int main() {
    for (int i = 0; i<10; i++) {
        cout << lucas(i) << " ";
    }
}