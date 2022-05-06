#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    int N; cin >> N;

    map<int, int> m;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        cin >> arr[i];
        m[arr[i]]++;
        if(m[arr[i]] == 1) cout << arr[i] << " ";
    }

    return 0;
}