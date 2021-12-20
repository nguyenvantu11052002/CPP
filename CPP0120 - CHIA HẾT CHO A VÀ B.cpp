#include<iostream>
#include<vector>

using namespace std;

void inraketqua(){
	long long m, n, a, b, count = 0;
	cin >> m >> n >> a >> b;
	for(long long i = m; i <= n; i++){
		if(i % a == 0 || i % b == 0) count++;
	}
	cout << count << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
