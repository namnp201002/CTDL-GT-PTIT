#include<iostream>
#include<vector>

using namespace std;

int count = 0;

void diChuyenTrongMaTran(int i, int j, int M, int N, vector<vector<int> >& arr){
    if(i == M-1 && j == N-1){
        count ++;
        return;
    }else if(i < M && j < N){
        diChuyenTrongMaTran(i+1, j, M, N, arr);
        diChuyenTrongMaTran(i, j+1, M, N, arr);
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int M, N; cin >> M >> N;

        vector<vector<int> > arr(M, vector<int>(N));

        for(int i = 0; i < M; i++){
            for(int j = 0; j < N; j++){
                cin >> arr[i][j];
            }
        }

        diChuyenTrongMaTran(0, 0, M, N, arr);
        
        cout << count << endl;
        count = 0;
    }
    return 0;
}