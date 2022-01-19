#include<iostream>

#include<math.h>

using namespace std;

void inraketqua(){
	char s;
	cin >> s;
	if(s >= 'A' && s <= 'Z'){
		s += 32;
		cout << s << endl;
		return;
	}
	if(s >= 'a' && s <= 'z') s -= 32;
	cout << s << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
