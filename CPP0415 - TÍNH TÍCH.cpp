#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n, m;
	cin >> n >> m;
	vector<long long> a(n);
	vector<long long> b(m);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int j = 0; j < m; j++) cin >> b[j];
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	long long result = a[n - 1]*b[0];
	cout << result << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
