#include<bits/stdc++.h>

using namespace std;

class dn{
	private:
		string ma, ten;
		int so;
	public:
		dn(){
			ma = ten = "";
			so = 0;
		};
		friend istream& operator >> (istream&, dn &);
		friend ostream& operator << (ostream&, dn);
		friend bool operator < (dn a, dn b){
			if(a.so != b.so) return a.so > b.so;
			return a.ma < b.ma;
		}
};

istream& operator >> (istream &in, dn &a){
	in >> a.ma;
	cin.ignore();
	getline(in, a.ten);
	cin >> a.so;
	return in;
}

void sapxep(dn ds[], int n){
	sort(ds, ds + n);
}

ostream& operator << (ostream &out, dn a){
	cout << a.ma << " " << a.ten << " " << a.so << endl;
	return out;
}

int main(){
    dn ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++){
    	cin >> ds[i];
    }
    sapxep(ds, N);
    for(i = 0; i < N; i++){
    	cout << ds[i];
	}
    return 0;
}
