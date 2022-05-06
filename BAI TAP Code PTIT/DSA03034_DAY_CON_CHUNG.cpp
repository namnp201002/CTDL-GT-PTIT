#include<iostream>
#include<vector>

using namespace std;
void dayConChung(){
    int M, N, K; cin >> M >> N >> K;

    vector<long> arr1(M), arr2(N), arr3(K);

    for(int i = 0; i < M; i++) cin >> arr1[i];
    for(int i = 0; i < N; i++) cin >> arr2[i];
    for(int i = 0; i < K; i++) cin >> arr3[i];

    int x = 0, y = 0, z = 0;
    bool check = false;

    while(x < M && y < N && z < K){
        if(arr1[x] == arr2[y] && arr2[y] == arr3[z]){
            check = true;
            cout << arr1[x] << " ";
            x++; y++; z++;
        }else if(arr1[x] < arr2[y]) x++;
        else if(arr2[y] < arr3[z]) y++;
        else z++;
    }

    if(!check) cout << "NO";
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        dayConChung();
    }
    return 0;
}
/*
1 5 10 20 40 80

5 7 20 80 100

3 4 15 20 30 70 80 120
*/