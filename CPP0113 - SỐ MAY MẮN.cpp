#include<iostream>
#include<vector>

using namespace std;

int check(int n){
	int d = n % 10;
	n /= 10;
	if(d != 6) return 0;
	int r = n % 10;
	if(r != 8) return 0;
	return 1;
}

void inraketqua(){
	int n;
	cin >> n;
	if(check(n)) cout << 1 << endl;
	else cout << 0 << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
