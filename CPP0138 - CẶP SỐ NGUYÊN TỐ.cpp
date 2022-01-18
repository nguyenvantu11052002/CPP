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
	long long n, count = 0;
	cin >> n;
	for(int i = 2; i <= n; i++){
		if(snt(i)){
			if(snt(n - i)){
				cout << i << " " << n - i;
				count++;
	    	}
	    }
	    if(count == 1) break;
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

