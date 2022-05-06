#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        vector<int> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

        cout << "[";
        for(int i = 0; i < N; i++){
            cout << arr[i];
            if(i!=N-1) cout << " ";
        }
        cout << "]\n";

        while(N > 1){
            cout << "[";

            for(int i = 0; i < N-1; i++){

                cout << arr[i] + arr[i+1];
                arr[i] += arr[i+1];

                if(i != N-2) cout << " ";
            }
            
            cout << "]\n";
            N--;
        }
    }
    return 0;
}