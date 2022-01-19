#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	vector<string> v;
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] >= 'A' && s[i] <= 'Z'){
			int check = 1;
			for(int j = i + 1; j < n; j++){
				if(s[i] == s[j]){
					check = 0;
					s[j] += 32;
				} 
			}
			if(check == 1) cout << s[i];
		}
	}
	cout << endl;
}

int main(){
	int k;
	cin >> k;
	cin.ignore();
	while(k--){
		inraketqua();
	}
	return 0;
}
