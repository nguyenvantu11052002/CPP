#include<bits/stdc++.h>
#include<fstream>
using namespace std;

long long ans = 0;

void TC(string s){
	if(s.size() > 10) return;
	for(int i = 0; i < s.size(); i++){
		if(s[i] < '0' || s[i] > '9') return;
	}
	long long sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum = sum * 10 + (s[i] - '0');
	}
	ans += sum;
}

int main(){
	ifstream fin;
	fin.open("DATA.in");
	string s;
	while(fin >> s){
		TC(s);
	}
	fin.close();
	cout << ans << endl;
	return 0;
}
