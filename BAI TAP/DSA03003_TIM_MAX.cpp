#include<iostream>
#include<algorithm>
#include<vector>

const long long MOD = 1e9+7;

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        vector<long> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());

        long long result = 0;
        for(int i = 0; i < N; i++){
            result += ((i%MOD) * (arr[i]%MOD))%MOD;
        }
        cout << result%MOD << endl;
    }
    return 0;
}