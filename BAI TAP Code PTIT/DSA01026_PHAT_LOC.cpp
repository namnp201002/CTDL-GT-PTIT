#include<iostream>
#include<string.h>

using namespace std;

bool kiemTra2So8(string s){
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == '8' &&s[i] == s[i+1]) return false;
    }
    return true;
}

bool kiemTraItHon3So6(string s){

    for(int i = 0; i < s.size()-3; i++){
        
        string x = s.substr(i, 4);
        if(x.compare("6666") == 0) return false;
    }
    return true;
}

int main(){
    int N; cin >> N;

    string s = "8";

    for(int i = 1; i < N; i++) s+='6';

    while(1){
        int i = N-1;

        while(i>=0 && s[i] == '8'){
            s[i] = '6';
            i--;
        }
        if(i<0) break;
        s[i] = '8';
        

        if(s[N-1] == '8') continue;

        if(kiemTra2So8(s) && kiemTraItHon3So6(s)) cout << s << endl;
    }

    return 0;
}