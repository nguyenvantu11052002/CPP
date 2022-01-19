#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

void inraketqua(){
	string s;
	cin >> s;
	char s1[12] = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};
	for(int i = 0; i < s.size(); i++){
		int check = 1;
		for(int j = 0; j < 12; j++){
			if(s[i] == s1[j]){
				check = 0;
				break;
			}
		}
		if(check == 1){
			s[i] = tolower(s[i]);
			cout << "." << s[i];
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	inraketqua();
}
