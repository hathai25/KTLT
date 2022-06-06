#include<bits/stdc++.h>
//Pham Huy Ha Thai - 20204784
using namespace std;
//khai bao struct so nguyen lon
struct bigNum {
    char sign;
    char num[101];
};

//nhap dau vao va tien xu ly data
void input(bigNum &num1, bigNum &num2){
    string tmp;
    cin >> tmp;
    num1.sign = tmp[0];
    int lens1 = tmp.length() - 1;
    for(int i=0; i<lens1; i++){
        num1.num[100-lens1+i+1] = tmp[i+1];
    }
    for(int i=0; i<100-lens1+1; i++) num1.num[i] = '0';

    cin >> tmp;
    num2.sign = tmp[0];
    int lens2 = tmp.length() - 1;
    for(int i=0; i<lens2; i++){
        num2.num[100-lens2+i+1] = tmp[i+1];
    }
    for(int i=0; i<100-lens2+1; i++) num2.num[i] = '0';
}

//ham cong 2 so nguyen lon
void add(char res[], char *num1, char *num2){
    int c = 0;

    for(int i=100; i>=0; i--){
        int tmp = (int)num1[i] - 48 + (int)num2[i] - 48 + c;
        c = tmp / 10;
        res[i] = tmp % 10 + 48;
    }
}

//ham tru hai so nguyen duong lon
void sub(char res[], char *num1, char* num2){
    int l = 0;

    for(int i=100; i>=0; i--){
        int temp1 = (int)num1[i] - 48;
        int temp2 = (int)num2[i] - 48;

        if(temp1 >= temp2 + l){
            res[i] = temp1 - temp2 - l + 48;
            l = 0;
        } else {
            temp1 = temp1 + 10;
            res[i] = temp1 - temp2 - l + 48;
            l = 1;
        }
    }
}

//nhan 2 so nguyen duong lon
void multiply(char res[], char *num1, char *num2){
    //clear mang res
    for(int i=0; i<101; i++) res[i] = '0';

    for(int i=100; i>=0; i--){
        //khoi tao array temp
        char temp[101];

        //them i so khong vao array
        int k;
        for(k = 0; k < i; k++)
            temp[100-k] = '0';

        int c = 0, sum = 0;
        for(int j=100; j>=0; j--){
            sum = ((int)num1[i] - 48) * ((int)num2[j] - 48) + c;
            temp[k] = (sum % 10) + 48;
            c = sum / 10;
            k--; if(k < 0) break;
        }

        add(res, temp, res);
    }
}

//kiem tra so nguyen 1 >= so nguyen 2
bool isBigger(char *num1, char *num2){
    int foo1, foo2;
    for(foo1 = 0; foo1 < 101; foo1++){
        if(num1[foo1] != '0') break;
    }

    for(foo2 = 0; foo2 < 101; foo2++){
        if(num2[foo2] != '0') break;
    }

    if(foo1 > foo2) return false;
    else if(foo1 < foo2) return true;
    else { // foo1 == foo2
        int foo = foo1;
        while(foo < 101){
            if(num1[foo] < num2[foo]) return false;
            else if (num1[foo] > num2[foo]) return true;
            else {
                foo++;
            }
        }
    }

    return true;
}

//chong phuong thuc cho dau + 
bigNum operator + (bigNum num1, bigNum num2){
    bigNum res;

    if(num1.sign == '1' && num2.sign == '1'){
        res.sign = '1';
        add(res.num,num1.num,num2.num);
        return res;
    } else if(num1.sign == '1' && num2.sign == '0'){
        if(isBigger(num1.num,num2.num)){
            res.sign = '1';
            sub(res.num,num1.num,num2.num);
            return res;
        } else {
            res.sign = '0';
            sub(res.num,num2.num,num1.num);
            return res;
        }
    } else if(num1.sign == '0' && num2.sign == '1'){
        if(isBigger(num1.num,num2.num)){
            res.sign = '0';
            sub(res.num,num1.num,num2.num);
            return res;
        } else {
            res.sign = '1';
            sub(res.num,num2.num,num1.num);
            return res;
        }
    } else {
        res.sign = '0';
        add(res.num,num1.num,num2.num);
        return res;
    }
}
//chong phuong thuc cho dau -
bigNum operator - (bigNum num1, bigNum num2){
    bigNum res;

    if(num1.sign == '1' && num2.sign == '0'){
        num2.sign = '1';
        res = num1 + num2;
        return res;
    } else if(num1.sign == '1' && num2.sign == '1'){
        num2.sign = '0';
        res = num1 + num2;
        return res;
    } else if(num1.sign == '0' && num2.sign == '1'){
        num2.sign = '0';
        res = num1 + num2;
        return res;
    } else {
        num2.sign = '1';
        res = num1 + num2;
        return res;
    }
}
//chong phuong thuc cho dau *
bigNum operator * (bigNum num1, bigNum num2){
    bigNum res;

    if(num1.sign == '1' && num2.sign == '1'){
        res.sign = '1';
        multiply(res.num,num1.num,num2.num);
        return res;
    } else if(num1.sign == '1' && num2.sign == '0'){
        res.sign = '0';
        multiply(res.num,num1.num,num2.num);
        return res;
    } else if(num1.sign == '0' && num2.sign == '1'){
        res.sign = '0';
        multiply(res.num,num1.num,num2.num);
        return res;
    } else {
        res.sign = '1';
        multiply(res.num,num1.num,num2.num);
        return res;
    }
}

//in so nguyen lon
void printBigNumber(bigNum number){
    cout << number.sign;
    int start;
    for(start=0; start<101; start++)
        if(number.num[start] != '0') break;

    for(int i = start; i<101; i++)
        cout << number.num[i];
}

int main(){
    bigNum num1, num2;
    input(num1,num2);

    bigNum num3, num4;
    num3.sign = '1', num4.sign = '1';
    for(int i=0; i<100; i++){
        num3.num[i] = '0';
        num4.num[i] = '0';
    }
    num3.num[100] = 3 + 48;
    num4.num[100] = 4 + 48;

    bigNum res = num1*num2 - num3 * num1 + num4 * num2;

    printBigNumber(res);
}