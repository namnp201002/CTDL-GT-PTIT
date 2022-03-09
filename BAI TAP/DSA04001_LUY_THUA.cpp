#include<iostream>

using namespace std;

const long mod = 1e9+7;

long long luyThua(int x, int y){
    if(y == 1){
        return x;
    }
    long long a = luyThua(x, y/2);
    if(y%2 == 0){
        return (a*a)%mod;
    }else{
        return ((a*a)%mod*x)%mod;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;

        cout << luyThua(x, y) << endl;
    }
    return 0;
}