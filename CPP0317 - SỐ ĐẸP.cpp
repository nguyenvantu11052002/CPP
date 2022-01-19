
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int check(string s){
	for(int i = 0; i < s.size(); i++){
		if(s[i] != s[s.size() - 1 - i]) return 0;
		if((s[i] - '0') % 2 != 0) return 0;
	}
	return 1;
}

void inraketqua(){
	string s;
	cin >> s;
	if(check(s)) cout << "YES";
	else cout << "NO";
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
