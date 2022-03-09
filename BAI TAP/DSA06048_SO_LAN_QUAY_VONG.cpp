#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long N; cin >> N;

        vector<long long> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

        bool check = false;
        int count = 0;
        
        int j = N-2;
        while(arr[j] <= arr[j+1] && j >=0) j--;

        if(j < 0){
            cout << 0;
            continue;
        }
        cout << j+1 << endl;

    }

    return 0;
}
// 5 4 3 2 1
// 6 2 2 3 4 4 5 5
//-> 4 4 5 5 1 2 2 3