#include<bits/stdc++.h>

using namespace std;

int dem = 0;

class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		SinhVien();
		friend istream& operator >> (istream&, SinhVien &);
		friend ostream& operator << (ostream&, SinhVien );
		friend bool operator < (SinhVien a, SinhVien b){
			return a.ma < b.ma;
		}
};

SinhVien::SinhVien(){
	ma = ten = lop = email = "";
}

istream& operator >> (istream &in, SinhVien &a){
	in >> a.ma;
	cin.ignore();
	getline(in, a.ten);
	in >> a.lop >> a.email;
	return in;
}

void sapxep(vector<SinhVien> &v){
	sort(v.begin(), v.end());
}

ostream& operator << (ostream &out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
	return out;
}

int main(){
	SinhVien a;
    vector<SinhVien> v;
    while(cin >> a){
    	v.push_back(a);
	}
	sapxep(v);
	for(SinhVien x : v){
		cout << x;
	}
    return 0;
}
