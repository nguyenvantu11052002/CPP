#include<iostream>
#include<math.h>
using namespace std;

void inraketqua(){
	long long n;
	cin >> n;
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			n /= i;
		}
		if(n == 1) cout << i;  
	}
	if(n > 1) cout << n;
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

