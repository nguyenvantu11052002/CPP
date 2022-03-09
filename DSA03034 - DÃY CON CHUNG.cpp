#include<bits/stdc++.h>
 
using namespace std;

void TC(){
	int n, m, h;
	cin >> n >> m >> h;
	int a[n], b[m], c[h];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int j = 0; j < m; j++){
		cin >> b[j];
	}
	for(int k = 0; k < h; k++){
		cin >> c[k];
	}
	int i = 0, j = 0, k = 0;
	vector<int> hihi;
	while(i < n && j < m && k < h){
		if(a[i] == b[j] && b[j] == c[k]){
			hihi.push_back(a[i]);
			i++; j++; k++;
		}
		else if(a[i] <= b[j] && a[i] <= c[k]){
			i++;
		}
		else if(b[j] <= a[i] && b[j] <= c[k]){
			j++;
		}
		else k++;
	}
	if(hihi.size() == 0){
		cout << "NO" << endl;
	}
	else{
		for(auto x : hihi){
			cout << x << " ";
		}
		cout << endl;
	}
}

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		TC();
	}
	return 0;
}

