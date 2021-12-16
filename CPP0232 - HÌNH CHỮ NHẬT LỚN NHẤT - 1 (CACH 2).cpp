#include<bits/stdc++.h>

using namespace std;

int Smax(int x[], int m){
	stack<int> st;
	int i = 0;
	int res = 0;
	while(i < m){
		if(st.empty() || x[i] >= x[st.top()]){
			st.push(i++);
		}
		else{
			int top = st.top();
			st.pop();
			if(st.empty()){
				res = max(res, i * x[top]);
			}
			else{
				res = max(res, x[top] * (i - st.top() - 1));
			}
		}
	}
	while(!st.empty()){
		int top = st.top();
		st.pop();
		if(st.empty()){
			res = max(res, i * x[top]);
		}
		else{
			res = max(res, x[top] * (i - st.top() - 1));
		}
	}
	return res;
}

void inraketqua(){
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int tmp[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i == 0) tmp[i][j] = a[i][j];
			else if(a[i][j] == 1){
				tmp[i][j] = tmp[i - 1][j] + 1;
			}
			else tmp[i][j] = 0;
		}
	}
	/////////////
	for(int i = 0; i < n; i++){
		sort(tmp[i], tmp[i] + m);
	}
	int res = 0;
	for(int i = 0; i < n; i++){
		res = max(res, Smax(tmp[i], m));
	}
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

//2
//2 3
//1 1 1
//0 1 1
//2 2
//1 0
//1 1


