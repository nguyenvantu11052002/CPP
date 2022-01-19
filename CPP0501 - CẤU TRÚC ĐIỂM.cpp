#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

struct Point{
	double a, b;
};

void input(struct Point &X){
	cin >> X.a >> X.b;
}

double distance(struct Point &A, struct Point &B){
	double kcbinhphuong = (B.a - A.a) * (B.a - A.a) + (B.b - A.b) * (B.b - A.b);
	double kc = sqrt(kcbinhphuong);
	return kc;
}

int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}

