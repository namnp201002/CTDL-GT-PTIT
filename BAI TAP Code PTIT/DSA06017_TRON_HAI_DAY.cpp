#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int M, N; cin >> M >> N;

        vector<int> arr1(M+N);
        
        for(int i = 0; i < M + N; i++) cin >> arr1[i];
        
        sort(arr1.begin(), arr1.end());
        
        for(int i = 0; i < M+N; i++) cout << arr1[i] << " ";

        cout << endl;

    }
    return 0;
}