#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    while (b > 0)
    {
        int x = a % b;
        a = b;
        b = x;
    }
    return a;
}

void inraketqua(){
	int a, b;
	cin >> a >> b;
	long long bcnn = (long long) a * b/ gcd(a, b);
	cout << bcnn << " " << gcd(a, b) << endl;
}

int main(){
	int k;
	cin >> k;
	while(k--){
		inraketqua();
	}
	return 0;
}
