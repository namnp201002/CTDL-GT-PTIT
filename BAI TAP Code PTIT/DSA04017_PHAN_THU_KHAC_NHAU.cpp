#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        int index = 0;

        vector<long long> array_A(N);
        vector<long long> array_B(N-1);

        for(int i = 0; i < N; i++) cin >> array_A[i];
        for(int i = 0; i < N-1; i++){
            cin >> array_B[i];
            if(array_A[i] != array_B[i] && index == 0) index = i+1;
        }

        if(index == N) cout << N;
        else cout << index;

        cout << endl;
    }
    return 0;
}