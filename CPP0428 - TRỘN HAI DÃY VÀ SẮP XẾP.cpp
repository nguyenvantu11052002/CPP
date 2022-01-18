#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n, m;
	cin >> n >> m;
	vector<int> a;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	for(int i = 0; i < m; i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	for(int i = 0; i < m + n; i++){
		cout << a[i] << " ";
	}
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
