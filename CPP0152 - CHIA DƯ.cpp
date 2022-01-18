#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

void inraketqua(){
	int a, m;
	cin >> a >> m;
	int count = 0;
	for(int i = 0; i < m; i++){
		int d = a * i;
		if(d % m == 1){
			cout << i << endl;
			count++;
			break;
		}
	}
	if(count == 0) cout << -1 << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
