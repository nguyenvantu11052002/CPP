#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	char c = s.back();
	return (c == '.' || c == '!' || c == '?');
}

void inraketqua(){
	string s;
	vector<string> v;
	while(cin >> s){
		v.push_back(s);
	}
	int ktra = 1;
	for(auto x : v){
		for(int i = 0; i < x.size(); i++){
			x[i] = tolower(x[i]);
		}
		if(ktra){
			x[0] = toupper(x[0]);
			ktra = 0;
		}
		if(check(x)){
			x.pop_back();
			cout << x << endl;
			ktra = 1;
		}
		else cout << x << " ";
	}
}

int main(){
	inraketqua();
	return 0;
}

