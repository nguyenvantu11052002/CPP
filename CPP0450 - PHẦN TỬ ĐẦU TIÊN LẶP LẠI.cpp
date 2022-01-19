
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int find(vector<int> a, int n){
	for(int i = 0; i < n; i++){
		for(int j = i - 1; j >= 0; j--){
			if(a[i] == a[j]) return j;
		}
	}
	return -1;
}

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	if(find(a, n) != -1) cout << a[find(a, n)];
	else cout << -1;
	cout << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
