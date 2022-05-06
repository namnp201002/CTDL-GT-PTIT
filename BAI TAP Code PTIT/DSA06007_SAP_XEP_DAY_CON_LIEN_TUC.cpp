#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        vector<int> v(N);
        int arr[N+5];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            v[i] = arr[i];
        }

        sort(arr, arr+N);

        int i = 0;
        while(i < N && arr[i] == v[i]){
            i++;
        }
        if(i == N-1){
            cout << "1 " << N << endl;
            continue;
        }
        int j = N-1;
        while(j >= 0 && arr[j] == v[j]){
            j--;
        }
        cout << i+1 << " " << j + 1 << endl;

    }
    return 0;
}