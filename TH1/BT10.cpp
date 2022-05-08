#include <iostream>

using namespace std;

int main() {
    int R;
    cout << "Input row & column: \n";
    cin >> R;
    int ** mt = new int*[R];
    int ** mt2 = new int*[R];
    for (int i = 0; i <R; i++) {
        mt[i] = new int[R];
        mt2[i] = new int[R];
    }
    cout << "Input first matrix: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<R; j++) {
            cin >> mt[i][j];
        }
    }
    cout << "Input second matrix: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<R; j++) {
            cin >> mt2[i][j];
        }
    }
    cout << "Sum of two matrices is: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<R; j++) {
            cout << mt[i][j]+mt2[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Product of two matrices is: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<R; j++) {
            int product = 0;
            for (int k = 0; k <R; k++) {
                product += (mt[i][k]*mt2[k][j]);
            }
            cout << product << " ";
        }
        cout << "\n";
    }
    for(int i =0; i<R;i++) {
        delete [] mt[i];
        delete [] mt2[i];
    }
    delete [] mt;
    delete [] mt2;
}