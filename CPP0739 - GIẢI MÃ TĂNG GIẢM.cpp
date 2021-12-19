#include<bits/stdc++.h>

using namespace std;

void inraketqua(){
	string s;
	cin >> s;
	string result = "";
	stack<int> st;
	// bai nay se co 1 con I ao o cuoi day, chinh la vi tri == s.size(); 
	// con I ao se thay the cho con I truoc no, tuc la bai nay co nhieu hon 1 con I so voi de bai , nhiem vu cua con I ao cuoi day la :
	// 0 1 2 3 4 5 5 7 8 // con I ao o tri tri(8)
	// I I I D D I D I(I ao);
	//12 3 6 5 4 8 7 9
	// I2 se co nhiem vu thay the cho I1, I3 thay the cho I2, cu nhu vay cho den khi con I ao se thay the cho con I cuoi cung;
	for(int i = 0; i <= s.size(); i++){
		st.push(i + 1); // cach lay 1 phan tu ra khoi stack la cu lay phan tu o tren cung ra cho den khi stack rong(het);
		if(i == s.size() || s[i] == 'I'){ // vi tri s.size() chinh la I ao day, thuc chat la if(I) trong do I bao gom I that va I ao;
			while(!st.empty()){
				result += to_string(st.top()); // neu s[i] == I thi lay het phan tu trong stack ra;
				st.pop();
			}
		}
	}
	cout << result << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
