#include<bits/stdc++.h>
// Bài này chưa AC đâu nghen, hiccc
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N, M; cin >> N >> M;

        int arr1[N+5], arr2[M+5];
        for(int i = 0; i < N; i++) cin >> arr1[i];
        for(int i = 0; i < M; i++) cin >> arr2[i];

        int count = 0;

        for(int i = 0; i < N; i++){
            if(arr1[i] != 1){
                for(int j = 0; j < M; j++){
                    if(arr2[j] == 1) count ++;
                    else if(arr1[i] == 2 && arr2[j] >= 5) count ++;
                    else if(arr1[i] == 3 && ( arr2[j] == 2 || arr2[j] >= 4)) count ++;
                    else if(arr2[j] > arr1[i]) count ++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}