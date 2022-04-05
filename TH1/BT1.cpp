#include<iostream>

using namespace std;

int main() {
    int x, y, z;
    int *ptr, *ptr1, *ptr2;
    cin >> x >> y >> z;
    ptr = &x;
    ptr1 = &y;
    ptr2 = &z;
    cout << *ptr << " " << *ptr1 << " " << *ptr2; 
    return 0;   
}