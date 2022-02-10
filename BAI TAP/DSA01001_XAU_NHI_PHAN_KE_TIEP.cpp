#include<iostream>
#include<string.h>

using namespace std;

bool kiemTraCauHinhCuoiCungChua(string s){
    string temp = "";
    for(int i = 0; i < s.size(); i++){
        temp += '1';
    }
    return temp == s;
}

void xuaNhiPhanKeTiep(string s){
    if(kiemTraCauHinhCuoiCungChua(s)){
        for(int i = 0; i < s.size()+1; i++){
            cout << "0";
        }
    }else{
        int j = s.size()-1;
        while(s[j] == '1'){
            s[j] = '0';
            j--;
        }
        s[j] = '1';
        cout << s;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s; cin >> s;
        xuaNhiPhanKeTiep(s);
        cout << endl;
    }
    return 0;
}