#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        int count = 0;

        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            if(arr[i] == 0) count ++;
        }
        cout << count << endl;
    }
    return 0;
}