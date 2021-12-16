#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	int n, p;
	cin >> n >> p;
	int x = 0;
	for(int i = 2; i <= n; i++){
		if(i % p == 0){
			int r = i;
			while(r % p == 0){
				x++;
				r /= p;
			}
		}
	}
	cout << x << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
