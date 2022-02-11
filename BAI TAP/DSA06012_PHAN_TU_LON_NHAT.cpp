#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N, K; cin >> N >> K;

        int arr[N+5];
        for(int i = 0; i < N; i++) cin >> arr[i];

        sort(arr, arr+N);

        N--;
        
        while(K--){
            cout << arr[N--] << " ";
        }
        cout << endl;
    }
    return 0;
}