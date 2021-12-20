#include<bits/stdc++.h>

using namespace std;
#define a() a;

class SinhVien{
	private:
		string ma, ten, lop, ns;
		double gpa;
	public:
		SinhVien();
		friend istream& operator >> (istream &, SinhVien &);
		friend ostream& operator << (ostream &, SinhVien );
};

SinhVien::SinhVien(){
	ma = ten = lop = ns = "";
	gpa = 0;
}

string chuanhoa(string s){
	string res = "";
	stringstream ss(s);
	string token;
	while(ss >> token){
		res += toupper(token[0]);
		for(int i = 1; i < token.size(); i++){
			res += tolower(token[i]);
		}
		res += " ";
	}
	res.erase(res.size() - 1);
	return res;
}

istream& operator >> (istream &in, SinhVien &a){
	a.ma = "B20DCCN001";
	getline(in, a.ten);
	a.ten = chuanhoa(a.ten);
	in >> a.lop >> a.ns >> a.gpa;
	if(a.ns[2] != '/') a.ns.insert(0, "0");
	if(a.ns[5] != '/') a.ns.insert(3, "0");
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	out << a.ma << " " << a.ten << " " << a.lop << " " << a.ns << " " << setprecision(2) << fixed << a.gpa;
	return out;
}

int main(){
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
