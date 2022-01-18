#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int search(vector<int> &a, int n){
	for(int i = 0; i < n - 1; i++){
		if(a[i] + 1 == a[i + 1]) continue;
		else return i;
	}
}

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n - 1; i++){
		cin >> a[i];
	}
	cout << a[search(a, n)] + 1 << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
