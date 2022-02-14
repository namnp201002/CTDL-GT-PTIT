#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        int sum1 = 0, sum2 = 0;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
            sum1 += arr[i];
        }

        bool check = false;

        for(int i = 0; i < N; i++){
            sum1 -= arr[i];
            if(sum1 == sum2){
                check = true;
                cout << i + 1;
                break;
            }
            sum2 += arr[i];
        }

        if(!check) cout << "-1";
        cout << endl;

    }

    return 0;
}