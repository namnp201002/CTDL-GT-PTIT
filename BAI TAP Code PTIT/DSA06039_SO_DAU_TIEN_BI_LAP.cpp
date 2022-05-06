#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int N; cin >> N;

        vector<int> arr(N);
        map<int, int> m;
        bool checker = false;
        int result;

        for(int i = 0; i < N; i++){
            cin >> arr[i];
            m[arr[i]]++;
            if(m[arr[i]] > 1 && !checker){
                checker = true;
                result = arr[i];
            }
        }
        
        if(!checker) cout << "NO" << endl;
        else cout << result << endl;
    }
    return 0;
}