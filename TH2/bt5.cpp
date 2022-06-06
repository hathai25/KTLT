#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip> 

using namespace std;
//khai bao struc so thuc
struct Complex {
    double real;
    double imag;
};
// ham cong 2 so thuc
Complex operator + (Complex a, Complex b) {
    /****************/
    //Pham Huy Ha Thai - 20204784
    Complex tmpC;
    tmpC.real = a.real + b.real;
    tmpC.imag = a.imag + b.imag;
    return tmpC;
    /*****************/
}
//ham tru hai so thuc
Complex operator - (Complex a, Complex b) {
    /*****************/
    Complex tmpC;
    tmpC.real = a.real - b.real;
    tmpC.imag = a.imag - b.imag;
    return tmpC;
    /*****************/
}
// ham nhan hai so thuc
Complex operator * (Complex a, Complex b) {
    /*****************/
    Complex tmpC;
    tmpC.real = a.real * b.real - a.imag * b.imag;
    tmpC.imag = a.real * b.imag + a.imag * b.real;
    return tmpC;
    /*****************/
}
//ham chia hai so thuc
Complex operator / (Complex a, Complex b) {
    /*****************/
    Complex tmpC;
    Complex inverse;
    inverse.real = b.real;
    inverse.imag = -b.imag;

    tmpC = a * inverse;
    tmpC.real = tmpC.real / (b.real * b.real + b.imag * b.imag);
    tmpC.imag = tmpC.imag / (b.real * b.real + b.imag * b.imag);
    return tmpC;
    /*****************/
}
// ham xuat so thuc 
ostream& operator << (ostream& out, const Complex &a) {
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}

int main() {
    double real_a, real_b, img_a, img_b;
    //nhap 2 so thuc
    cin >> real_a >> img_a;
    cin >> real_b >> img_b;
    //gan gia tri cho 2 so thuc
    Complex a{real_a, img_a};
    Complex b{real_b, img_b};
    //xuat cac ket qua voi cac toan tu
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    return 0;
}