#include<bits/stdc++.h>

using namespace std;
string DIGIT = "0123456789ABCDEF";
string convertTo16(long long x){
    string s = "";

    while(x > 0){
        int mod = x % 16;
        if(mod >= 10){
            char c = 'A';
            mod -= 10;
            c += mod;
            s += c;
        }else {
            s += to_string(mod);
        }
        x /= 16;
    }
    reverse(s.begin(), s.end());

    return s;
}

bool checkTongChuSo(string s, long long N){
    long long sum = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            sum += (s[i] - '0');
        }else{
            sum += (s[i] - 'A' + 10);
        }
    }

    if(sum == N) return true;
    return false;
}

bool checkKhacNhauTrongCoSo16(string s){
    // string s = convertTo16(x);
    for(int i = 0; i < s.size()-1; i++){
        for(int j = i+1; j < s.size(); j++){
            if(s[i] == s[j]) return false;
        }
    }
    return true;
}

int main(){
    long long N; cin >> N;

    long long max = LLONG_MAX;
    string result;
    for(int i = 0; i < 106181139; i++){
        string s = convertTo16(i);
        if(checkTongChuSo(s, N)){
            if(checkKhacNhauTrongCoSo16(s)){
                if(max < i) result = s;
            }
        }
    }
    if(result.empty()) cout << "NOT FOUND !!!";
    else cout << result;

    return 0;
}