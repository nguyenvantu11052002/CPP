#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

int snt(int n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

int ascendingNumber(int n){
	int p = 10;
	while(n > 0){
		int d = n % 10;
		n /= 10;
		if(d < p) p = d;
		else return 0;
	}
	return 1;
}

int descendingNumber(int n){
	int p = -1;
	while(n > 0){
		int d = n % 10;
		n /= 10;
		if(d > p) p = d;
		else return 0;
	}
	return 1;
}

void inraketqua(){
	int n;
	cin >> n;
	int a = pow(10, n - 1);
	int b = pow(10, n) - 1;
	int count = 0;
	for(int i = a; i <= b; i++){
		if(ascendingNumber(i)){
			if(snt(i)) count++;
		}
		if(descendingNumber(i)){
			if(snt(i)) count++;
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

