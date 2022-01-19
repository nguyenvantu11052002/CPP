#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<iomanip>
using namespace std;

string a = "ABBADCCABDCCABD";
string b = "ACCABCDDBBCDDBB";

void inraketqua(){
	int n;
	cin >> n;
	double result = 0;
	if(n == 101){
		for(int i = 0; i < 15; i++){
			char x;
			cin >> x;
			if(x == a[i]) result += (double)2/3;
		}
	}
	else{
		for(int i = 0; i < 15; i++){
			char x;
			cin >> x;
			if(x == b[i]) result += (double)2/3;
		}
	}
	cout << setprecision(2) << fixed << result << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
