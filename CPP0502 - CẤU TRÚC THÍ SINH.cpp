#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

struct ThiSinh{
	string name;
	string date;
	double a, b, c, tong;
};

void nhap(struct ThiSinh &A){
	getline(cin, A.name);
	getline(cin, A.date);
	cin >> A.a >> A.b >> A.c;
}
	
void in(struct ThiSinh &A){
	A.tong = A.a + A.b + A.c;
	cout << A.name << " " << A.date << " ";
	cout << setprecision(1) << fixed << A.tong;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}

