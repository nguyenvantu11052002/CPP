#include<bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7;

struct NhanVien{
	string name;
	string sex;
	string date;
	string address;
	string thue;
	string hopdong;
};

void nhap(struct NhanVien &a){
	getline(cin, a.name);
	getline(cin, a.sex);
	getline(cin, a.date);
	getline(cin, a.address);
	getline(cin, a.thue);	
	getline(cin, a.hopdong);	
}
	
void in(struct NhanVien &a){
	vector<string> v;
	for(int i = 0; i < a.date.size(); i++){
		if(a.date[i] != '/'){
			int p = i;
			while(a.date[p] != '/' && p < a.date.size()) p++;
			v.push_back(a.date.substr(i, p - i));
			i = p;
		}
	}
	if(v[0].size() < 2) v[0] = "0" + v[0];
	if(v[1].size() < 2) v[1] = "0" + v[1];
	for(int i = 0; i < a.hopdong.size(); i++){
		if(a.hopdong[i] != '/'){
			int p = i;
			while(a.hopdong[p] != '/' && p < a.hopdong.size()) p++;
			v.push_back(a.hopdong.substr(i, p - i));
			i = p;
		}
	}
	if(v[3].size() < 2) v[3] = "0" + v[3];
	if(v[4].size() < 2) v[4] = "0" + v[4];   
	cout << "00001 " << a.name << " " << a.sex << " "; 
	cout << v[0] << "/" << v[1] << "/" << v[2] << " " << a.address << " " << a.thue << " ";  // ngaythangnamsinh  v2 la year;
	cout << v[3] << "/" << v[4] << "/" << v[5]; // ngay ki hop dong
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}

