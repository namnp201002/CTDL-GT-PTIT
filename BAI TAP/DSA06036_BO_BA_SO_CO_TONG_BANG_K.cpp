#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
// Huong lam bai nay giong nhu bai bo ba so Pytago

bool boBaSoCoTongBangK(int N, vector<long> arr, long K){
    int index = N;

    sort(arr.begin(), arr.end());

    for(int i = N-1; i >= 0; i--){
        if(arr[i] > K){
            index--;
        }
    }

    if(index < 3) return false; // neu cac phan tu trong mang lon hon K thi false

    for(int i = index - 1; i >= 2; i--){
        long temp = K - arr[i];
        int l = 0,  r = i-1;
        while(l < r){
            if(arr[l] + arr[r] == temp) return true;
            else if(arr[l] + arr[r] > temp) r--;
            else l++;
        }
    }

    return false;

}

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        long K; cin >> K;

        vector<long> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

        if(boBaSoCoTongBangK(N, arr, K)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}