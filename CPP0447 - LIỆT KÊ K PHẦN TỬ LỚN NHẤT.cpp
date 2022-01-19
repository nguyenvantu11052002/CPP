#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	for(int i = 0; i < k; i++){
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
