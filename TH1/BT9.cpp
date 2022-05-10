#include<iostream>

using namespace std;

int main() {
    cout << "Pham Huy Ha Thai \nMSSV: 20204784\n";
    //Khai bao mang
    int n;
    cin >> n;
    int arr[n];
    //Nhap mang
    for(int i=0; i<n; i++)
        cin >> arr[i];
    //In ra cac to hop
    for(int i=0; i<n; i++)
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
    return 0;
}
