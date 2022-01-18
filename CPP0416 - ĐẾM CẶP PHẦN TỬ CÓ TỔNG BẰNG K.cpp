#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n, k, count = 0;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[i] + a[j] == k) count++;
		}
	}
	cout << count << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
