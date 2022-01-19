#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void inraketqua(){
	int n;
	cin >> n;
	for(int i = 2; i <= n/2; i++){
		if(snt(i)){
			if(snt(n - i)){
				cout << i << " " << n - i << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
