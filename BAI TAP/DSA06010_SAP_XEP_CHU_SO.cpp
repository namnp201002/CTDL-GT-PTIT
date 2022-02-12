#include<bits/stdc++.h>

using namespace std;

void sapXepChuSo(int N, long long arr[]){
    set<char> result;
    for(int i = 0; i < N; i++){
        string s = to_string(arr[i]);
        for(int i = 0; i < s.size(); i++){
            result.insert(s[i]);
        }
    }
    for(set<char>::iterator it = result.begin(); it != result.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int N; cin >> N;

        long long arr[N+5];
        for(int i = 0; i < N; i++) cin >> arr[i];

        sapXepChuSo(N, arr);
    }
    return 0;
}