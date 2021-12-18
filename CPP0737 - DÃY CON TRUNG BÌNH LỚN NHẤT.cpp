#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	double res = 0;
	double tb = 0;
	int tong = 0;
	int l = 0, r = k - 1; // neu day chi co k phan tu thi l = 0 r = k - 1 de in ra ca day;
	for(int i = 0; i < k; i++){
		tong += a[i];
	}
	tb = (double)tong/k;
	//cout << tb << endl;
	res = tb; // res = tb chu kp res = max(res, tb) neu tb < 0 thi sao ? de bai cho -1e3 <= ai <= 1e3 co ma;
	for(int i = k; i < n; i++){
		tong += a[i] - a[i - k];
		tb = (double)tong/k;
		if(tb > res){
			res = tb;
			r = i;
			l = i - k + 1;
		}
	}
	for(int i = l; i <= r; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
