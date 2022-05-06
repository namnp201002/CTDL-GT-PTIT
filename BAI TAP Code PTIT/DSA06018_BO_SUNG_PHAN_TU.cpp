#include<iostream>
#include<vector>
#include<set>
#include<climits>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        set<int> s;
        vector<int> arr(N);

        int min = INT_MAX, max = INT_MIN;
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            s.insert(arr[i]);
            if(arr[i] > max) max = arr[i];
            if(arr[i] < min) min = arr[i];
        }

        cout << max-min+1-s.size() << endl;

    }

    return 0;
}