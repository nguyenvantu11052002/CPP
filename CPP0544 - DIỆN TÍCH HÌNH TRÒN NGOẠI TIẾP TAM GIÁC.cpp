#include<bits/stdc++.h>

using namespace std;

#define PI 3.141592653589793238

int check(double ab, double bc, double ca){
	if(ab + bc <= ca || bc + ca <= ab || ab + ca <= bc) return 0;
	return 1;
}

void inraketqua(){
	double a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f; // A(a;b) B(c;d) C(e;f);
	double abmu2 = (c - a) * (c - a) + (d - b) * (d - b);
	double ab = sqrt(abmu2);
	double bcmu2 = (e - c) * (e - c) + (f - d) * (f - d);
	double bc = sqrt(bcmu2);
	double camu2 = (e - a) * (e - a) + (f - b) * (f - b);
	double ca = sqrt(camu2);
	if(check(ab, bc, ca) == 0){
		cout << "INVALID\n";
		return;
	}
	else{
		double P = (ab + bc + ca)/2;
		double Smu2 = P * (P - ab) * (P - bc) * (P - ca);
		double S = sqrt(Smu2);
		double R = (ab * bc * ca)/(4 * S);
		double result = PI * R * R;
		cout << setprecision(3) << fixed << result << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
