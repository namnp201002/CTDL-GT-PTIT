#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<string> result;


void diChuyenTrongMeCung(int i, int j, int &N, vector<vector<int> >& arr, string s){
    if(i == N-1 && j == N-1 && arr[i][j] == 1){
        result.push_back(s);
        return;

    }else if( i < N && j < N && arr[i][j] == 1){

        diChuyenTrongMeCung(i+1, j, N, arr, s + "D");

        diChuyenTrongMeCung(i, j+1, N, arr, s + "R");
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        vector<vector<int> > arr(N, vector<int>(N));

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++) cin >> arr[i][j];
        }

        diChuyenTrongMeCung(0, 0, N, arr, "");

        if(result.empty() || arr[0][0] == 0){
            cout << "-1\n";
            continue;
        }

        for(int i = 0; i < result.size(); i++) cout << result[i] << " ";

        result.clear();
        cout << endl;
    }
    return 0;
}
