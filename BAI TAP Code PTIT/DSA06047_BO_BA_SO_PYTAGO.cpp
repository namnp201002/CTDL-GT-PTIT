#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

using namespace std;

bool checkPytago(int& N, vector<long long>& arr){
    for(int i = 0; i < N; i++){
        arr[i] *= arr[i];
    }

    sort(arr.begin(), arr.end());

    for(int i = N-1; i >= 2; i--){
        int r = 0, l = i - 1;
        while(l > r){
            if(arr[l] + arr[r] == arr[i]) return true;
            else if(arr[l] + arr[r] > arr[i]) l--;
            else r++;
        }
    }
    return false;
}

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        vector<long long> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

        if(checkPytago(N, arr)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}