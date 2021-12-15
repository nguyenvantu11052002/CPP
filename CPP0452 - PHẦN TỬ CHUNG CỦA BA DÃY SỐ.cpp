#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	long long a[n1], b[n2], c[n3];
	for(auto &x : a) cin >> x;
	for(auto &x : b) cin >> x;
	for(auto &x : c) cin >> x;
	long long i = 0, k = 0, j = 0;
	int ok = 0;
	while(i < n1 && j < n2 && k < n3){
		if(a[i] == b[j] && b[j] == c[k]){
			ok = 1;
			cout << a[i] << " ";
			i++; j++; k++;
		}
		else if(a[i] <= b[j] && a[i] <= c[k]){ // khong co chuyen ca 2 dau bang xay ra dau, vi neu ca 2 dau = xay ra thi no thuc hien cai if o tren roi;
			i++;							    // neu a[i] == b[j] nhung a[i] van nho hon c[k] thi else;
		}
		else if(b[j] <= c[k] && b[j] <= a[i]){
			j++;
		}
		else k++;
	}
	if(!ok) cout << -1;
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
