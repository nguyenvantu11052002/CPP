#include<bits/stdc++.h>

using namespace std;
/*
nhan xet : 
1.de so thao tac it nhat thi uu nhien x2 toan day len hon la cong 1 tung phan tu;
2.so lan nhan 2 se la log2(solonnhat) vi muon bien so 0 ( so 0 cua day ban dau) thanh so lon nhat thi chon cach nhan 2 cang nhieu cang tot;
vi khi lam nhu vay thi it thao tac nhat, chu neu cong 1 de duoc so lon nhat thi lai la mat nhieu thao tac nhat roi;
vi du day so 16 17 18 can 9 thao tac do la 111(3) 222(1) 444(1) 888(1) 889(1) 161618(1) 161718(1);
3. de hieu ro hon nhan xet2 thi ta den voi day so 17 19 33; de thay muon len so 17 thi 2^4 nhung len so 33 thi can 2^5(33 khac 17 19 1 buoc o cho 111 => 112 chinh la tu 2^(4+1) buoc
~~~~~~~~~~o code duoi day so 5 chinh la 2^5 trong 33;
4. so 19 - 1 = 18, 18 chia 2 = 9 la so le, chia 2 ra so le thi suy nguoc lai rang so do tu 1 so le x 2 ma tao thanh; 
cac buoc tao thanh cua day 17 19 33 nhu sau : 111 112 224 448 8816 ----> 8916 -----> 161832 171933; 
con so 9 trong 8 9 16 tu so 8 trong day 8 8 16 cong them 1 ma tao thanh, day chinh la 1 thao tac====> dieu nay giai thich vi sao phai cong phan du khi so do la so le;
(congphandu)19 - 1 = 18, 18 /2 = 9, (congphandu) 9 - 1 = 8; 8/2 =4/2=2/2=1 (congphandu)
5. su chenh lech giua vi du 17 19 33, de tao thanh so 33 thi tu buoc 111 phai ra buoc 112, khi do a3 cua 112 dang gap 2 lan a3 cua 111; tuc la di truoc 1 lan 2^; vi 33 > 1 lan 2^ so voi 17 ma;
*/
void inraketqua(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int cong1 = 0;
	int luythua2 = 0;
	for(int i = 0; i < n; i++){
		int cnt = 0;
		int x = a[i];
		while(x > 0){
			if(x % 2 == 0){
				x /= 2;
				cnt++;// dem so lan 2^ de tao ra so lon nhat, duoi day se lay max cua cac cnt;
			}
			else{
				x--;
				cong1++;
			}
		}
		luythua2 = max(luythua2, cnt);
	}
	cout << luythua2 + cong1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}
