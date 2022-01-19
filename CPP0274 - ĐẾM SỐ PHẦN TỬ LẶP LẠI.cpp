
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(1e5, 0);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[a[i]]++;
	}
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(b[a[i]] > 1){
			sum += b[a[i]];
			b[a[i]] = 0;
		}
	}
	cout << sum << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
