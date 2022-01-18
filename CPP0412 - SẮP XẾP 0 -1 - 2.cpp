#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	int *a = new int[n];
	vector<int> b;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b.push_back(a[i]);
	}
	sort(b.begin(), b.end());
	for(int i = 0; i < n; i++){
		cout << b[i] << " ";
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
