#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        int arr[N+5];
        for(int i = 0; i < N; i++) cin >> arr[i];
        sort(arr, arr+N);
        int left = 0, right = N-1;
        while(left < right){
            cout << arr[right] << " " <<  arr[left] << " ";
            right--; left++;
        }
        if(N % 2 != 0) cout << arr[N/2];
        cout << endl;
    }
    return 0;
}