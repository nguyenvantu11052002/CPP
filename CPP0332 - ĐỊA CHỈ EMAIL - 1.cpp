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
	cout << v.back();
	for(int i = 0; i < v.size() - 1; i++){
		cout << v[i][0];
	}
	cout << "@ptit.edu.vn";
}

int main(){
	inraketqua();
}
