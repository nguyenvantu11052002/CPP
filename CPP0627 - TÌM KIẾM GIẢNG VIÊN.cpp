#include<bits/stdc++.h>

using namespace std;

int dem = 0;

class Giangvien{
	private:
		string ten, ma, bm;
	public:
		Giangvien(){
			ma = ten = bm = "";
		};
		friend istream& operator >> (istream&, Giangvien &);
		friend ostream& operator << (ostream&, Giangvien);
		string getTen(){
			return this->ten;
		}
};

istream& operator >> (istream &in, Giangvien &a){
	dem++;
	a.ma += "GV" + string(2 - to_string(dem).size(), '0') + to_string(dem);
	getline(in, a.ten);
	getline(in, a.bm);
	return in;
}

string chuyen4kitudau(string s){
	string res = "";
	string token;
	stringstream ss(s);
	while(ss >> token){
		token[0] = toupper(token[0]);
		res += token[0];
	}
	return res;
}

string chuyenfullthuong(string s){
	string res = "";
	for(auto x : s){
		x = tolower(x);
		res += x;
	}
	return res;
}

ostream& operator << (ostream &out, Giangvien a){
	cout << a.ma << " " << a.ten << " " << chuyen4kitudau(a.bm) << endl;
	return out;
}

int main(){
    Giangvien ds[50];
    int N,i;
    cin >> N;
    cin.ignore();
    for(i=0;i<N;i++){
    	cin >> ds[i];
    }
    int q;
    cin >> q;
    while(q--){
    	string s;
    	cin >> s;
    	cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
    	s = chuyenfullthuong(s);
    //	cout << s << endl;
    	for(Giangvien x : ds){
    		string thg = chuyenfullthuong(x.getTen());
    		if(thg.find(s) != string::npos){
    			cout << x;
			}
		}
	}
    return 0;
}
