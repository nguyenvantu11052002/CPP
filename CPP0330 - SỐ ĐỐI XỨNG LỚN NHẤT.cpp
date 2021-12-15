#include <bits/stdc++.h>
using namespace std;
int so(char c){
	return c - '0';
}
bool cmp1(pair <int,int> a,pair <int,int> b){
    if(a.second==b.second) return a.first>b.first;
    return a.second>b.second;
}
bool cmp2(pair <int,int> a,pair <int,int> b){
    return a.first>b.first;
}

void TC(){
	  string a;
        cin>>a;
        int b[10]={0};
        int check = 1;
        vector <pair <int,int> > a1,a2;
        for(int i=0;i<a.size();i++){
        	b[a[i]-'0']++;
        	if(so(a[i]) != 0){
        		check = 0;
			}
		}
        if(check == 1){
		cout << a << endl;
		return ;
	}	
        for(int i=0;i<10;i++){
            if(b[i]%2==1) a1.push_back(make_pair(i,b[i]));
            else if(b[i]!=0) a2.push_back(make_pair(i,b[i]));
        }
        sort(a1.begin(),a1.end(),cmp1);
        sort(a2.begin(),a2.end(),cmp2);
        if(b[0]%2==1){
            for(int i=0;i<a2.size();i++){
                for(int j=0;j<a2[i].second/2;j++) cout<<a2[i].first;
            }
            if(a2.size()==0){
                if(a1.size()==1) for(int i=0;i<b[0];i++) cout<<0;
                else for(int i=0;i<a1[1].second;i++) cout<<a1[1].first;
            }
            else{
                if(b[0]>a1[0].second) for(int i=0;i<b[0];i++) cout<<0;
                else for(int i=0;i<a1[0].second;i++) cout<<a1[0].first;
            }
            for(int i=a2.size()-1;i>=0;i--){
                for(int j=0;j<a2[i].second/2;j++) cout<<a2[i].first;
            }
        }
        else{
	        if(a2.size()>0&&a2[0].first!=0){
	            for(int i=0;i<a2.size();i++){
	                for(int j=0;j<a2[i].second/2;j++) cout<<a2[i].first;
	            }
			    }
          for(int i=0;i<a1[0].second;i++) cout<<a1[0].first;
          if(a2.size()>0&&a2[0].first!=0){
	            for(int i=a2.size()-1;i>=0;i--){
	                for(int j=0;j<a2[i].second/2;j++) cout<<a2[i].first;
	            }
			    }
        }
        cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
      TC();
    }
    return 0;
}
// thêm 
#include<bits/stdc++.h>

using namespace std;

int so(char c){
	return c - '0';
}

bool cmp1(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second) return a.first > b.first;
	return a.second > b.second;
}

bool cmp2(pair<int, int> a, pair<int, int> b){
	return a.first > b.first;
}

void inraketqua(){
	string s;
	cin >> s;
	int n = s.size();
	int b[10] = {0};
	int check = 1;
	for(int i = 0; i < n; i++){
		b[so(s[i])]++;
		if(so(s[i]) != 0){
			check = 0;
		}
	}
	// truong hop xau s toan so 0;
	if(check == 1){
		//cout << s << endl;
		return;
	}
	vector<pair<int, int> > a1, a2;
	for(int i = 0; i < 10; i++){
		// a1 gom cac so co so lan xuat hien le;
		if(b[i] != 0 && b[i] % 2 == 1){
			a1.push_back({i, b[i]});
		}
		// a2 gom cac so co so lan xuat hien chan;
		if(b[i] != 0 && b[i] % 2 == 0){
			a2.push_back({i, b[i]});
		}
	}
	// a1 sap xep theo so lan xuat hien giam dan, neu == so lan xuat hien thi sap xep theo gia tri giam dan; 9 9 9 9 9  7 7 7 7 7 ; vi ta chi lay duoc 1 so le duy nhat, 
	// xuat hien cang nhieu thi cang lam cho xau ket qua MAXXXXXXX;
	sort(a1.begin(), a1.end(), cmp1);
	// a2 sap xep theo gia tri giam dan;
	sort(a2.begin(), a2.end(), cmp2);
	// size a2 == 0 thi in ra so le xh nhieu nhat;
	if(a2.size() == 0){
		if(a1[0].first != 0){
			for(int i = 0; i < a1[0].second; i++){
				cout << a1[0].first;
			}
		cout << endl;
		}
		else{
			for(int i = 0; i < a1[1].second; i++){
				cout << a1[1].first;
			}
			cout << endl;
		}
		return;
	}
	// size a1 == 0 thi in het so chan ra;
	if(a1.size() == 0){
		for(int i = 0; i < a2.size(); i++){
			for(int j = 0; j < a2[i].second/2; j++){
				cout << a2[i].first;
			}
		}
		for(int i = a2.size() - 1; i >= 0; i--){
			for(int j = 0; j < a2[i].second/2; j++){
				cout << a2[i].first;
			}
		}
		cout << endl;
		return;
	}
	// truong hop so 123454321 ; tuc la so a1[0] lon hon all cac so trong a2; hoac tong quat hon la 54321512345;
	vector<int> aa;
	if(a1[0].first > a2[0].first){
		for(int i = 0; i < a1[0].second/2; i++){
			aa.push_back(a1[0].first);
		}
		for(int i = 0; i < a2.size(); i++){
			for(int j = 0; j < a2[i].second/2; j++){
				aa.push_back(a2[i].first);
			}
		}
		aa.push_back(a1[0].first);
		for(int i = a2.size() - 1; i >= 0; i--){
			for(int j = 0; j < a2[i].second/2; j++){
				aa.push_back(a2[i].first);
			}
		}
		for(int i = 0; i < a1[0].second/2; i++){
			aa.push_back(a1[0].first);
		}
		if(a2[0].first == 0){
			for(int i = 0; i < a1[0].second; i++){
				cout << a1[0].first;
			}
		}
		else{
			for(int i = 0; i < aa.size(); i++){
				cout << aa[i];
			}
		}
		cout << endl;
		return;
	}
	/*
	// in xem thu a1, a2;
	for(int i = 0; i < a1.size(); i++){
		cout << a1[i].first << " " << a1[i].second << endl;
	}
	cout << "HET a1\n";
	for(int i = 0; i < a2.size(); i++){
		cout << a2[i].first << " " << a2[i].second << endl;
	}
	cout << "HET a2\n";
	*/
	// ket qua phai duoc in ra theo kieu hinh chu V ( giam dan xong lai tang dan), can chen so le a1[0] vao vi tri hop ly;
	int ok = 1;
	//cout << "a1 thu 0 first : " << a1[0].first << "a1 thu 0 second :" << a1[0].second << endl;
	vector<int> a; // vector nay de luu nhung so o suon xuong dau tien cua chu V, muc dich nhat nua in nguoc lai la ra cai suon len ben phai chu V;
	for(int i = 0; i < a2.size(); i++){ // a2.size() + 1 ; so 1 la de in them a1[0] do;
		if(a2[i].first > a1[0].first){
			for(int j = 0; j < a2[i].second/2; j++){
				cout << a2[i].first;
				a.push_back(a2[i].first);
			}
		}
		else if(ok == 1){
			for(int k = 0; k < a1[0].second/2; k++){
				cout << a1[0].first;
				a.push_back(a1[0].first);
			}
			i--;
			ok = 0; // chi in 1 lan so le thoi;
		}
		else{
			for(int l = 0; l < a2[l].second/2; l++){
				cout << a2[i].first;
				a.push_back(a2[i].first);
			}
		}
	}
	// truong hop a1[0] nho hon all cac so trong a2;
	if(a1[0].first < a2[a2.size() - 1].first){ // neu dkien trong if la dung thi cai vong for o tren no chay het roi van chua toi luot in ra so a1[0].first, chay thu la biet;
		for(int i = 0; i < a1[0].second; i++){ // ban dau minh chi lam cai dong else 101 thoi nen no in thieu so 0 o test , kq ra 91019 => sai;
			cout << a1[0].first;
		}
	} 
	else{
		cout << a1[0].first; // so o giua xau doi xung;
	}
	for(int i = a.size() - 1; i >= 0; i--){
		cout << a[i];
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		inraketqua();
	}
	return 0;
}

