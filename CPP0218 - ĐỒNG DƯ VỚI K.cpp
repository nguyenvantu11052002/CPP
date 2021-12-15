#include<bits/stdc++.h>

using namespace std;

const long long mod = 1e9 + 7;


void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	int m = a[0];
	for(int i = 0; i < n; i++){
		a[i] = a[i] - m;
	}
	int ucln = a[0];
	for(int i = 1; i < n; i++){
		ucln = __gcd(ucln, a[i]);  // buoc dau tien la ucln = gcd(a0, a1) nen kp thac mac ;
	}
	int ans = 0;
	for(int i = 1; i <= sqrt(ucln); i++){ //int ucln chinh la gcd cua cac so nay trong mang ban dau : a1 - a0, a2 - a0, a3 - a0, ..............., an-1 - a0, an - a0;
		if(ucln % i == 0) ans += 2;       //a1 - a0 ma chia het cho ucln thi a1 va a0 co cung so du khi chia cho ucln
		if(ucln % i == 0 && i * i == ucln) ans--;           // tuong tu a2, a3, ....,an cung so du khi chia cho ucln, =>>>>> so ucln nay thoa man
	} 										// va ucln = k * n thi k va n cung thoa man, da chia het cho ucln thi se chia het cho k va n, suy luan quay lai dong 24;
	cout << ans << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
