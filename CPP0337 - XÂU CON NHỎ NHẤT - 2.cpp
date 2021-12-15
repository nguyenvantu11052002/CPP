#include<bits/stdc++.h>

using namespace std;
// y tuong cua bai nay la tim ra cua so dau tien chua day du all ki tu khac nhau trong s, sau do thu nho cua so la xong, thu nho = cach duyet cua so dang xet = con tro trai left
// neu tan suat xuat hien cua s[left] trong cua so van > 1 thi loai bo di la xong, thua ma @@;
void inraketqua(){ 
	string s;
	cin >> s;
	int dem[256] = {0};
	for(auto x : s) dem[x]++;
	int cnt = 0;				  
	for(int i = 0; i < 255; i++){ // [a a b c b c d] b c a   
		if(dem[i] != 0) cnt++;    
	}
	int dem1[256] = {0};
	int cnt1 = 0;
	int l = 0; // con tro ben trai;
	int ans = INT_MAX; // ket qua;
	for(int i = 0; i < s.size(); i++){
		dem1[s[i]]++; // phai de cai nay o ngoai if, khong thi se khong tim duoc cua so be nhat, dong nay co nhiem vu la sau khi tim duoc du cac ki tu khac nhau trong s.......
		if(dem1[s[i]] <= 1){//.......roi thi van phai dem tiep cac ki tu dang sau de thu nho cua so; neu de trong if thi ke tu sau ki tu nao cung xuat hien roi thi no khong dem len nua;
			cnt1++;
		}
		if(cnt1 == cnt){ // khi cnt1 == cnt co nghia la i dang o vi tri tu cuoi cung de hoan thien du xau chua cac ki tu khac nhau trong s;
			while(dem1[s[l]] > 1){
				dem1[s[l]]--; // bo qua thi giam so lan xuat hien thoi;
				l++; // nhay qua vi tri tu do, noi cach khac la bo qua tu do;
			}
			if(i - l + 1 < ans){
				ans = i - l + 1;
			}
		}
	}
	int cnt2 = s.substr(l, ans).size();
	cout << cnt2 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
