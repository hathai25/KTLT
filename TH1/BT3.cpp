#include<iostream>

using namespace std;

int main() {
    int x, y, z;
    int* ptr;
    cin >> x >> y >> z;
    ptr = &x;
    *ptr += 100;
    ptr = &y;
    *ptr += 100;
    ptr = &z;
    *ptr += 100;
    cout << x << " " << y << " " << z;
}
