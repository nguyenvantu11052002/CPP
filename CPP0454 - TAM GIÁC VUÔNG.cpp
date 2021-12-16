#include<bits/stdc++.h>

using namespace std;

int isOK(int a, int b)
{
    long long x = (long long)a * a + (long long)b * b;
    int c = sqrt(x);
    if ((long long)c * c == x) return c;
    return 0;
}

int check(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			int x = isOK(a[i], a[j]);
			if(x != 0){
				if(binary_search(a + j + 1, a + n, x)) return 1;
			}
		}
	}
	return 0;
}

void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n);
	if(check(a, n)) cout << "YES";
	else cout << "NO";
	cout << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
