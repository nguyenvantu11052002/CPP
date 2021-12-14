#include<bits/stdc++.h>

using namespace std;

struct toado{
	int h, t;
};

void nhap(toado &a){
	cin >> a.h >> a.t;
}
			// a1 a2
			// b1 b2
long long solve(toado a, toado b){
	long long res = a.h * b.t - a.t * b.h;
	return res;                        
}

void inraketqua(){
	int n;
	cin >> n;
	struct toado a[n];
	for(int i = 0; i < n; i++){
		nhap(a[i]);
	}
	double res = 0;
	for(int i = 0; i < n - 1; i++){
		res += solve(a[i], a[i + 1]);
	}
	res += solve(a[n - 1], a[0]);
	res /= 2;
	cout << setprecision(3) << fixed << res << endl; 
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
