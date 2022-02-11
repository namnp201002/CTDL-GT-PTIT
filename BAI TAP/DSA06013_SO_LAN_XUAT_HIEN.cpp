#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int N, X; cin >> N >> X;
        int count = 0;
        int arr[N+5];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            if(arr[i] == X) count ++;
        }
        if(count != 0) cout << count;
        else cout << "-1";
        cout << endl;
    }
    return 0;
}