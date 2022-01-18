#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	long long n;
	cin >> n;
	int a[1005];
	vector<long long> b;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		b.push_back(a[i]);
	}
	sort(b.begin(), b.end());
	if(n % 2 != 0){
		for(int i = 0; i < n/2; i++){
			cout << b[n - 1 - i] << " " << b[i] << " "; 
		}
		cout << b[n/2];
	}
	else{
		for(int i = 0; i < n/2; i++){
			cout << b[n - 1 - i] << " " << b[i] << " "; 
		}
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
