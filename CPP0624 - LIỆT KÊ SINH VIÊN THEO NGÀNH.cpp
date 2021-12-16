#include<bits/stdc++.h>
 
using namespace std;
 
class SinhVien{
	private:
		string ma, ten, lop, email;
	public:
		SinhVien();
		friend istream& operator >> (istream&, SinhVien &);
		friend ostream& operator << (ostream&, SinhVien );
		string getMa(){
			return this->ma;
		}
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
 
string haikitudautennganh(string s){
	string res = "";
	string token;
	stringstream ss(s);
	while(ss >> token){
		token[0] = toupper(token[0]);
		res += token[0];
	}
	while(res.size() > 2) res.pop_back(); // lay 2 ki tu dau tien thoi : nhap test q vi du la : cong nghe thong tin thi lay CN thoi;
	return res;
}
 
string chuyeninhoa(string s){
	string res = "";
	string token;
	stringstream ss(s);
	while(ss >> token){
		for(auto x : token){
			x = toupper(x);
			res += x;
		}
		res += " ";
	}
	res.pop_back();
	return res;
}
 
int main(){
	SinhVien ds[1000];
	int n; 
	cin >> n;
	map<string, vector<SinhVien> > mp;
	for(int i = 0; i < n; i++){
		cin >> ds[i];
		mp[ds[i].getMa().substr(5, 2)].push_back(ds[i]);
	}
	int q;
	cin >> q;
	cin.ignore();
	while(q--){
		string s;
		getline(cin, s);
		string xauin = chuyeninhoa(s);
		string ss = haikitudautennganh(s);
		cout << "DANH SACH SINH VIEN NGANH " << xauin << ":" << endl;
		if(ss == "AT" || ss == "CN" ){
			for(SinhVien x : mp[ss]){
				if(x.getLop().find("E") == string::npos) cout << x;
			}
		}
		else{
			for(SinhVien x : mp[ss]){
				cout << x;
			}
		}
	}
    return 0;
}
