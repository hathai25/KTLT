#include <iostream>

using namespace std;

int main() {
    int R, RC, C;
    cout << "Input row: \n";
    cin >> R;
    cout << "Input row-column: \n";
    cin >> RC;
    cout << "Input column: \n";
    cin >> C;
    int ** mt = new int*[R];
    int ** mt2 = new int*[RC];
    for (int i = 0; i <R; i++) {
        mt[i] = new int[RC];
    }
    for (int i = 0; i <RC; i++) {
        mt2[i] = new int[C];
    }
    cout << "Input first matrix: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<RC; j++) {
            cin >> mt[i][j];
        }
    }
    cout << "Input second matrix: \n";
    for (int i = 0; i<RC; i++) {
        for (int j = 0; j<C; j++) {
            cin >> mt2[i][j];
        }
    }
    cout << "Product of two matrices is: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            int product = 0;
            for (int k = 0; k <RC; k++) {
                product += (mt[i][k]*mt2[k][j]);
            }
            cout << product << " ";
        }
        cout << "\n";
    }
    for(int i =0; i<R;i++) {
        delete [] mt[i];
    }
    for(int i =0; i<RC;i++) {
        delete [] mt2[i];
    }
    delete [] mt;
    delete [] mt2;
}