#include<iostream>
#include<vector>

using namespace std;

int reduction(int n){
	if(n < 10) return n;
	int sum = 0;
	while(n > 0){
		int d = n % 10;
		n /= 10;
		sum += d;
	}
	return reduction(sum);
}

void inraketqua(){
	int n;
	cin >> n;
	cout << reduction(n) << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
