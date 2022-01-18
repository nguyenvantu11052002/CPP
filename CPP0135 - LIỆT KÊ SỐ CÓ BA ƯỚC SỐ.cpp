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
	long long n;
	cin >> n;
	for(int i = 2; i <= sqrt(n); i++){
		if(snt(i)) cout << i * i << " ";
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

