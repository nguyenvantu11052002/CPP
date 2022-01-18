#include<iostream>
#include<math.h>

using namespace std;

void inraketqua(){
	long long x, y, p;
	cin >> x >> y >> p;
	long long d = 1;
	for(int i = 0; i < y; i++){
		d = (d * x) % p;
	}
	cout << d << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
