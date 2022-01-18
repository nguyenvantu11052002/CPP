#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int search(vector<int> &a, int n, int x){
	for(int i = 0; i < n; i++){
		if(a[i] == x) return i + 1;
	}
}

void inraketqua(){
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cout << search(a, n, x) << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
