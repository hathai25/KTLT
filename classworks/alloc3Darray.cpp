#include<iostream>

using namespace std;

int main() {
    int R, C, H;
    cout << "Input row: \n";
    cin >> R;
    cout << "Input column: \n";
    cin >> C;
    cout << "Input height: \n";
    cin >> H;
    int ***mt = new int**[R];
    for (int i = 0; i<R; i++) {
        mt[i] = new int*[C];
        for (int j = 0; j<C; j++) {
            mt[i][j] = new int[H];
        }
    }
    cout << "Input array: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            for (int k = 0; k<H; k++) {
                cin >> mt[i][j][k];
            }
        }
    }
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            for (int k = 0; k<H; k++) {
                cout << mt[i][j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    for (int i = 0; i<R; i++) {
        for (int j = 0; j < C; j++) {
            delete [] mt[i][j];
        }
        delete [] mt[i];
    }
    delete [] mt;
}