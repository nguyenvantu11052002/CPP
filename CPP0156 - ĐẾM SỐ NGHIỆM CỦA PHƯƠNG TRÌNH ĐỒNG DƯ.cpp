#include<bits/stdc++.h>

using namespace std;

long long solve(int n, int p){ 
    long long ans = 0;																				// == 1     == 0          == 0
	for(long long x = 1; x < p; x++){  // neu so x thoa man x^2 % p == 1 thi so ( x + i * p) cung thoa man vi ( x^2 + 2 * x * i * p + i^2 * p^2) % p cung bang 1;
		if( x * x % p == 1){
			long long last = x + p * (n/p); // so cuoi cung thoa man, nhung co the vuot qua n vi so p : ////////////           n = p * (n/p + n % p) : phan n % p la 1 so < p va day la phan mat di  
			if(last > n){                                                             // phan du n % p: ////                   
				last -= p; 				   // so x < p thi x truong hop xau nhat la sit gan = p nen x : /////////
			}
			ans += ((last - x)/p + 1);  // bien doi cua dong 9, day so x, x + p, x + 2p, x + 3p,............, x + n/p * p; thi co n/p + 1 so thoa man
		}
	}
	return ans;
}

void inraketqua(){
	int n, p;
	cin >> n >> p;
	cout << solve(n, p) << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
