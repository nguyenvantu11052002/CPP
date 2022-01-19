#include<iostream>
#include<vector>
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
	int n;
	cin >> n;
	if(snt(n)) cout << "YES";
	else cout << "NO";
}

int main(){
	inraketqua();
	return 0;
}
