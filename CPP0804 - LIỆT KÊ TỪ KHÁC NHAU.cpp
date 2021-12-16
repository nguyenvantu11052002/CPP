#include<bits/stdc++.h>
#include<fstream>
using namespace std;

set<string> st;

void chuanhoa(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}

int main(){
	ifstream fin;
	fin.open("VANBAN.in");
	string s;
	while(fin >> s){
		chuanhoa(s);
		st.insert(s);
	}
	for(auto x : st){
		cout << x << endl;
	}
	fin.close();
	return 0;
}
