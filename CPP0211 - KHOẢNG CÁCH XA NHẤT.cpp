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
	int ans = 0;
	for(int i = 0; i < n - 1; i++){    
		for(int j = n - 1; j > i; j--){ 
			if(a[j] >= a[i]){
				if(ans < j - i){
					ans = j - i;
				}
				break;
			}
		}
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
