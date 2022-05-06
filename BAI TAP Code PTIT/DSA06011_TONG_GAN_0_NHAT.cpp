#include<iostream>
#include<vector>
#include<math.h>
#include<climits>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;

        vector<int> arr(N);
        for(int i = 0; i < N; i++) cin >> arr[i];

        int x, y;
        int min = INT_MAX;
        for(int i = 0; i < N - 1; i++){
            for(int j = i + 1; j < N; j++){
                if(abs(arr[i] + arr[j]) < min){
                    min = abs(arr[i] + arr[j]);
                    x = arr[i]; y = arr[j];
                }
            }
        }
        cout << x + y << endl;
    }
    return 0;
}