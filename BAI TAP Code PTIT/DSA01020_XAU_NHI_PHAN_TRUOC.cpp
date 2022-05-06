#include<iostream>
#include<string.h>

using namespace std;
void xauNhiPhanTruoc(string s){
    int i = s.size()-1;
    while(s[i] == '0') i--;
    if(i>=0) s[i] = '0';
    i+=1;
    while(i<s.size()){
        s[i++] = '1';
    }
    cout << s << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        xauNhiPhanTruoc(s);
    }
    return 0;
}