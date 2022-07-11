#include<bits/stdc++.h>
#include<vector>

using namespace std;
const double PI = 3.14;

typedef struct DaThuc{
    char name;
    int n; //bac cua da thuc
    float var; //gia tri x
    float *HeSo; //mang danh sach cac he so
} DaThuc;

//ham nhap da thuc
void NhapDaThuc(DaThuc *x)
{
    cout << "\nNhap ten da thuc: ";
    cin >> x ->name;
	do{
		cout << "\nNhap bac: ";
		cin >> x ->n;

		if(x ->n < 1)
		{
			cout << "\nSo bac cua da thuc phai >= 1. Xin kiem tra lai !";
		}
	}while(x ->n < 1);
    cout << "\nNhap x: ";
	cin >> x ->var;
	x ->HeSo = new float[x ->n + 1];
	for(int i = 0; i <= x ->n; i++)
	{
		cout << "\nHe so bac " << i << ": ";
		cin >> x ->HeSo[i];
	}
}
//ham xuat da thuc 
void XuatDaThuc(DaThuc *x)
{
    float total = 0;
	if(x ->n == 1)
	{
        cout << x ->name << "(x): ";
		cout << x ->HeSo[1] << " + ";
		cout << x ->HeSo[0] << " * x";
	}
	else
	{
        
        cout << x ->name << "(x): ";
		cout << x ->HeSo[x ->n] << "*x^" << x ->n << " + ";
		for(int i = x->n-1; i >= 2; i--)
		{
			cout << x ->HeSo[i] << "*x^" << i << " + ";
            total += x ->HeSo[i]*(x->var, i);
		}
		
        cout << x ->HeSo[1] << "*x + ";
		cout << x ->HeSo[0] << "\n";
	}
    cout << "\nGia tri da thuc: "<< x->name << "(x) =" << total += x->HeSo[1] += x ->HeSo[0];
}

int main(){
    int soluong;
    DaThuc *temp = new DaThuc;

    cout << "Pham Huy Ha Thai - 20204784 - 715025 " << endl;
    cout << "Nhap so luong da thuc: ";
    cin >> soluong;
    while (true)    {
        cout << "** CHUONG TRINH QUAN LY CAC DA THUC **" << endl;
        cout << "** 1. Nhap cac da thuc, gia tri x **" << endl;
        cout << "** 2. In danh sach da thuc, va gia tri **" << endl;
        cout << "** 0. Thoat **";
        cout <<"*******************************\n**   Nhap lua chon cua ban   **\n";

        int n;
        cin >> n;
        
        switch(n){
            case 0: {
                cout << "Ket thuc chuong trinh" << endl;
                return 0;
            }
            case 1: {
                cout << "Ban da chon nhap DS da thuc!" << endl;
                
                cout << "_____________________________" << endl;
                cout << "Nhap da thuc thu 1" << endl;
                cout << "Nhap ten da thuc: f" << endl;
                NhapDaThuc(temp);
                cout << "_____________________________" << endl;
                cout << "\nBan da nhap thanh cong";
                cout << "\nBam phim bat ky de tiep tuc\n";
                break;
            }
            case 2: {
                cout << "Ban da chon xuat DS da thuc, Gia tri da thuc!" << endl;
                XuatDaThuc(temp);
                break;
            }
            default:{
                cout << "Lua chon ban nhap khong dung! moi ban nhap lai!";
                break;
            }
        }
    }

    return 0;
}