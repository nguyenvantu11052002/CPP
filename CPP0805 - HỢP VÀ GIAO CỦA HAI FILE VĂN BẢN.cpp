#include<bits/stdc++.h>
#include<fstream>
using namespace std;

set<string> st1;
set<string> st2;
map<string, int> mp;
set<string> giao;
set<string> hop;
void chuanhoa(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}

int main(){
	ifstream f1, f2;
	f1.open("DATA1.in");
	f2.open("DATA2.in");
	string s1, s2;
	while(f1 >> s1){
		chuanhoa(s1);
		st1.insert(s1);
	}
	while(f2 >> s2){
		chuanhoa(s2);
		st2.insert(s2);
	}
	for(auto x : st1){
		mp[x]++;
	}
	for(auto x : st2){
		mp[x]++;
	}
	for(auto x : mp){
		if(x.second == 2){
			giao.insert(x.first);
			hop.insert(x.first);
		}
		else{
			hop.insert(x.first);
		}
	}
	for(auto x : hop){
		cout << x << " ";
	}
	cout << endl;
	for(auto x : giao){
		cout << x << " ";
	}
	cout << endl;
	f1.close();
	f2.close();
	return 0;
}
