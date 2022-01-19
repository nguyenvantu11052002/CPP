#include <bits/stdc++.h>
using namespace std;
 
void inraketqua(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int result = 2 * pow(10, 6);
	int plusOrminusOfResult;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(abs(a[i] + a[j]) < result){
				result = abs(a[i] + a[j]);
				plusOrminusOfResult = a[i] + a[j];
			}
		}
	}
	cout << plusOrminusOfResult << endl;
}
 
int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
