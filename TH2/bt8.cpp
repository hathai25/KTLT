#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    //Pham Huy Ha Thai - 20204784
    int val1, val2;  
    cin >> val1 >> val2;  // nhap val1, val2
    vector< vector<int> > a = {  // khoi tao vector a
        {1, 3, 7},
        {2, 3, 4, val1},
        {9, 8, 15},
        {10, val2},
    };

    //# sắp xếp các vector trong a theo tổng các phần tử giảm dần
    /*****************/
        sort(a.begin(), a.end(), [](vector<int> x, vector<int> y){
            int sum1 = 0;
            for(unsigned int i=0; i<x.size(); i++)
                sum1 += x[i];

            int sum2 = 0;
            for(unsigned int i=0; i<y.size(); i++)
                sum2 += y[i];

            return sum1 > sum2;
         });
    /*****************/
    for (const auto &v : a) {
        for (int it : v) {
            cout << it << ' ';  // xuat 1 vector
        }
        cout << endl; // xuong dong
    }
    return 0;
}