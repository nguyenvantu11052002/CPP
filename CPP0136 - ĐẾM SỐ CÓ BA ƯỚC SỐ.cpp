#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

long long snt(long long n){
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return 1;
}

void inraketqua(){
	long long n, count = 0;
	cin >> n;
	for(int i = 1; i <= sqrt(n); i++){
		if(snt(i)) count++;
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
