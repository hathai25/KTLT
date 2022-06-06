#include<bits/stdc++.h>                      
//Pham Huy Ha Thai - 20204784

using namespace std;

struct element {     // khai bao struct element<key,value>
   int key;
   int value;
};

vector<element> arr;

int main(){
    int temp1, temp2;
    //get input key,value
    while (cin >> temp1 && cin >> temp2) {      
        element temp;
        temp.key = temp1;
        temp.value = temp2;
        arr.push_back(temp);
    }
    //ham sap xep nac danh
    sort(arr.begin(), arr.end() ,[] (element a, element b){     
        if(a.value > b.value) return true;
        else if (a.value < b.value) return false;
        else {
            return a.key >= b.key;
        }
    });
    //in cac cap <key,value> sau khi sap xep
    for(int i =0; i<arr.size(); i++)                         
       cout << arr[i].key << " " << arr[i].value <<endl;
    return 0;
}
