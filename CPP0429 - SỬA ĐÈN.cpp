#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, k, b;
	cin >> n >> k >> b;
	int a[n];
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
	int dd[b];
	for(int i = 1; i <= b; i++){
		cin >> dd[i];
		a[dd[i]] = 0;
	}
	int sobonghong = 0;
	int minn = INT_MAX;
	for(int i = 1; i <= k; i++){
		if(a[i] == 0){
			sobonghong++;
		}
	}
	minn = min(minn, sobonghong);
	for(int i = k + 1; i <= n; i++){
		if(a[i] == 0){
			sobonghong++;
		}
		if(a[i - k] == 0){
			sobonghong--;
		}
		minn = min(minn, sobonghong);
	}
	cout << minn << endl;
}

int main(){
	int t = 1;
	while(t--){
		inraketqua();
	}
	return 0;
}
