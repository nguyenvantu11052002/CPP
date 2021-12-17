#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	long long ans = 0;
	for(int i = 0; i < n - 1; i++){
		auto it = lower_bound(a + i + 1, a + n, a[i] + k); // tim vi tri dau tien >= a[i] + k , tuc la vi tri dau tien bat dau khong thoa man, thi vi tri truoc no se thoa man;
		ans = ans + it - a - 1 - i; // neu khong tim thay a[j] dau tien >= a[i] + k thi tra ve phan tu cuoi day tuc la it = n; khi do cong thuc it - 1 - i van thoa man; it - 1 la vi tri cuoi cung thoa man, it la vi tri dau tien khong thoa man
	}
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
