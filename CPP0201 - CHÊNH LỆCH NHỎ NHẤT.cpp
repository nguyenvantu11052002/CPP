
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	int result = pow(10, 9) + 5;
	for(int i = 0; i < n - 1; i++){
		int p = a[i] - a[i + 1];
		result = min(result, p);
	}
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
