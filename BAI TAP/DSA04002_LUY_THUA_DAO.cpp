#include<iostream>

using namespace std;

const long long mod = 1e9+7;

long long luyThua(long long x, long long y){
    if(y == 0){
        return 1;
    }
    long long a = luyThua(x, y/2);
    if(y%2 == 0){
        return (a*a)%mod;
    }else{
        return ((a*a)%mod*x)%mod;
    }
}

long long dao(long long x){
    long long result = 0;
    while(x > 0){
        result = result*10 + x%10;
        x/=10;
    }

    return result;
}

int main(){
    int t; cin >> t;
    while(t--){
        long long x; cin >> x;

        long long daoX = dao(x);

        cout << luyThua(x, daoX) << endl;
    }
    return 0;
}