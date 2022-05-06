#include<iostream>
#include<math.h>

using namespace std;

long long deQuy(long long n, long long k, long long l, long long r){
    long long mid = (l+r)/2;
    if(mid == k){
        return n;
    }else if(k < mid){
        return deQuy(n-1, k, l, mid);
    }else return deQuy(n-1, k, mid+1, r);
}

int main(){
    int t; cin >> t;
    while(t--){
        long long N, K; cin >> N >> K;
        cout << deQuy(N, K-1, 0, pow(2, N)-1) << endl;
    }
    return 0;
}
