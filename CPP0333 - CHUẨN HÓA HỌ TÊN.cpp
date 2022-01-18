#include<iostream>
#include<math.h>
#include<iomanip>
#include<vector>

using namespace std;

void inraketqua(){
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
	vector<string> v;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != ' '){
			int p = i;
			while(s[p] != ' ' && p < s.size()) p++;
			v.push_back(s.substr(i, p - i));
			i = p;
		}
	}
	for(int i = 0; i < v.back().size(); i++){
		v.back()[i] -= 32;
	}
	for(int i = 0; i < v.size() - 1; i++){
		v[i][0] -= 32;
		cout << v[i];
		if(i != v.size() - 2) cout << " "; 
	}
	cout << ", ";
	cout << v.back();
}

int main(){
	inraketqua();
}
