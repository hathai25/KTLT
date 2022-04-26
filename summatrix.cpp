#include <iostream>

using namespace std;

int main() {
    int R, C;
    cout << "Input row: \n";
    cin >> R;
    cout << "Input column: \n";
    cin >> C;
    int ** mt = new int*[R];
    int ** mt2 = new int*[R];
    for (int i = 0; i <R; i++) {
        mt[i] = new int[C];
        mt2[i] = new int[C];
    }
    cout << "Input first matrix: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            cin >> mt[i][j];
        }
    }
    cout << "Input second matrix: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            cin >> mt2[i][j];
        }
    }
    cout << "Sum of two matrices is: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            cout << mt[i][j]+mt2[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Sum of two matrices is: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            cout << mt[i][j]+mt2[i][j] << " ";
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