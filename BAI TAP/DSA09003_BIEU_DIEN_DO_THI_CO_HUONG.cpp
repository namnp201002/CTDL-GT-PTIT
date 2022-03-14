#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N, M; cin >> N >> M;
    
        vector<vector<int> > arr(N+1, vector<int>(N+1));
        vector<int> vs(N+1);
        for(int i = 1; i <= M; i++){
            int x, y;
            cin >> x >> y;
            arr[x][y] = 1;
        }

        for(int i = 1; i <= N; i++){
            cout << i << ": ";
            for(int j = 1; j <= N; j++){
                if(arr[i][j] == 1 ){
                    // vs[j] = 1;
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}