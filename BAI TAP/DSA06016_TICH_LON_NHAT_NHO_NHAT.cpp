#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int M, N; cin >> M >> N;

        vector<long> arr1(M+1);
        vector<long> arr2(N+1);

        long max = LONG_MIN;
        long min = LONG_MAX;

        for(int i = 0; i < M; i++){
            cin >> arr1[i];
            if(arr1[i] > max) max = arr1[i];
        }

        for(int i = 0; i < N; i++){
            cin >> arr2[i];
            if(arr2[i] < min) min = arr2[i];
        }

        cout << min*max << endl;
    }
    return 0;

}