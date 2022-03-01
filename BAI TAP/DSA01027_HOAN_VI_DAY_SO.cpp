#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int N; cin >> N;

    vector<int> arr(N);
    vector<int> check(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        check[i] = i;
    } 

    sort(arr.begin(), arr.end());

    while(1){
        for(int i = 0; i < N; i++){
            cout << arr[check[i]] << " ";
        }
        cout << endl;

        int i = N-2;
        while(check[i] > check[i+1]) i--;

        if(i < 0) break;

        int k = N-1;
        while(check[k] < check[i]) k--;

        swap(check[i], check[k]);

        int l = i+1, r = N-1;

        while(l < r){
            swap(check[l++], check[r--]);
        }
    }
    return 0;
}