#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        vector<long> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());

        long min = 1e9;

        for(int i = 0; i < N-1; i++){
            if(arr[i+1] - arr[i] < min) min = arr[i+1] - arr[i];
        }
        cout << min << endl;
    }
    return 0;
}