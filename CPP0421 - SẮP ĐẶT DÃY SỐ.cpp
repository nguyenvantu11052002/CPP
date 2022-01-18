#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

void inraketqua(){
	long long n, count = 0;
	cin >> n;
	vector<long long> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	vector<long long> b(1e6, -1);
	int p = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == a[j]){
				b[i] = a[j];
				p++;
				break;
			}
		}
	}
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
