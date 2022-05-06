#include<iostream>
#include<math.h>

using namespace std;

char kyTuThuKTrongXau(int l, int r, int K, int N){
    int mid = (l+r)/2;
    if(mid == K) {
        return '@' + N;
    }else if(K > mid){
        return kyTuThuKTrongXau(mid + 1, r, K, N-1);
    }else return kyTuThuKTrongXau(l, mid, K, N-1);
}

int main(){
    int t; cin >> t;
    while(t--){
        int N, K; cin >> N >> K;
        int l = 0, r = pow(2, N) - 1;
        cout << kyTuThuKTrongXau(l, r, K-1, N);
        cout << endl;
    }
    return 0;
}