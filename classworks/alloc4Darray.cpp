#include<iostream>

using namespace std;

int main() {
    int R, C, H, T;
    cout << "Input row: \n";
    cin >> R;
    cout << "Input column: \n";
    cin >> C;
    cout << "Input height: \n";
    cin >> H;
    cout << "Input time: \n";
    cin >> T;
    int ****mt = new int***[R];
    for (int i = 0; i<R; i++) {
        mt[i] = new int**[C];
        for (int j = 0; j<C; j++) {
            mt[i][j] = new int*[H];
            for (int k = 0; k<H; k++) {
                mt[i][j][k] = new int[T];
            }
        }
    }
    cout << "Input array: \n";
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            for (int k = 0; k<H; k++) {
                for (int l = 0; l<T; l++) {
                    cin >> mt[i][j][k][l];
                }
            }
        }
    }
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            for (int k = 0; k<H; k++) {
                for (int l = 0; l<T; l++) {
                    cout << mt[i][j][k][l] << " ";
                }
                cout << "\n";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    for (int i = 0; i<R; i++) {
        for (int j = 0; j < C; j++) {
            for (int k = 0; k<H; k++) {
                delete [] mt[i][j][k];
            }
            delete [] mt[i][j];
        }
        delete [] mt[i];
    }
    delete [] mt;
}