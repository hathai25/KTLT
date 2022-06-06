#include<bits/stdc++.h>
//Pham Huy Ha Thai - 20204784
using namespace std;
//khai bao da thuc
typedef complex<double> base;
typedef vector<base> vbase;
//lay input da thuc
void getInput(int &n, int &m, vbase &x, vbase &y){
    cin >> n;
    for(int i=0; i<=n; i++){
        int temp;
        cin >> temp;
        base mycomplex(temp, 0);
        x.push_back(mycomplex);
    }

    cin >> m;
    for(int i=0; i<=m; i++){
        int tmp;
        cin >> tmp;

        base mycomplex(tmp,0);
        y.push_back(mycomplex);
    }
}

void ft(vbase & a, bool rev){
	int n = (int)a.size();

	for(int i=1, j=0; i<n; ++i){
		int bit = n >> 1;
		while(j>=bit){
			j =j- bit;
             bit=bit>>1;
        }
		j =j+ bit;
		if (i < j)
			swap (a[i], a[j]);
	}

	for(int len=2; len<=n; len<<=1){
		double ang = 2*M_PI/len;
        if(rev==1) ang=-ang;
		complex<double> wlen (cos(ang), sin(ang));
		for (int i=0; i<n; i+=len) {
			complex<double> w (1);
			for (int j=0; j<len/2; ++j) {
				complex<double> u = a[i+j],  v = a[i+j+len/2] * w;
				a[i+j] = u + v;
				a[i+j+len/2] = u - v;
				w =w * wlen;
			}
		}
	}
	if(rev==1)
		for(int i=0; i<n; ++i)
			a[i] /=n;
}
//lay product 2 da thuc
int product(int n, int m, vbase x, vbase y){
    int p = 1;
	while(p < max (n, m)) p=p<<1;
	p=p<<1;
	x.resize(p);
    y.resize(p);

	ft(x, false);
    ft(y, false);

    vector<base> h(p);
	for (int i=0; i<p; i++)
		h[i] =x[i]*y[i];

	ft (h, true);

	int res = (int)(real(h[0])+0.5);
	for (int i=1; i<=p; i++){
		res = res ^ (int)(real(h[i])+0.5);
	}

    return res;
}

int main(){
    int n, m;
    vector<base> x,y;
    getInput(n,m,x,y);
    cout << product(n,m,x,y);
}