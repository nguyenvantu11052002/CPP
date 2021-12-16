#include<bits/stdc++.h>

using namespace std;

class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		SinhVien();
		friend istream& operator >> (istream&, SinhVien &);
		friend ostream& operator << (ostream&, SinhVien );
		string getLop(){
			return this->lop;
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

ostream& operator << (ostream &out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
	return out;
}

int main(){
	SinhVien ds[1000];
	int n; 
	cin >> n;
	map<string, vector<SinhVien> > mp;
	for(int i = 0; i < n; i++){
		cin >> ds[i];
		mp[ds[i].getLop()].push_back(ds[i]);
	}
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
		for(SinhVien x : mp[s]){
			cout << x;
		}
	}
    return 0;
}
