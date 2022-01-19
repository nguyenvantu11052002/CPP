
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	long long odd = 0;
	long long even = 0;
	for(int i = 0; i < s.size(); i++){
		if(i % 2 == 0) odd += s[i] - '0';
		else even += s[i] - '0';
	}
	long long result = (odd - even) % 11;
	if(result == 0) cout << 1;
	else cout << 0;
	cout << endl; 
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
