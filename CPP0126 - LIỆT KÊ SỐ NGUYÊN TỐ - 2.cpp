#include<iostream>
#include<math.h>
using namespace std;

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void inraketqua(){
	long long m, n;
	cin >> m >> n;
	for(int i = m; i <= n; i++){
		if(snt(i)) cout << i << " ";
	}
	cout << endl;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		inraketqua();
	}
	return 0;
}

