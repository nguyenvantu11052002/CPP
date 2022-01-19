#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

void inraketqua(){
	long long n, sum = 0;
	cin >> n;
	sum = (n*(n + 1))/2;
	cout << sum << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}

