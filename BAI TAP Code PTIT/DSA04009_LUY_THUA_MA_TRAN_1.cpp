#include<iostream>
#include<vector>

using namespace std;

const long mod = 1e9+7;

int N;

vector<vector<long long> > nhanMaTran(vector<vector<long long> > &arr1, vector<vector<long long> > &arr2){
    vector<vector<long long> > result(N, vector<long long>(N));
    for(int i = 0; i < arr1.size(); i++){
        for(int j = 0; j < arr2.size(); j++){
            for(int k = 0; k < arr1.size(); k++){
                result[i][j] = (result[i][j] + (arr1[i][k] * arr2[k][j]%mod))%mod;
            }
        }
    }
    return result;
}

vector<vector<long long> > luyThuaMaTran(vector<vector<long long> >& arr, long K){
    if(K == 1) return arr;
    vector<vector<long long> > x = luyThuaMaTran(arr, K/2);
    vector<vector<long long> > y = nhanMaTran(x, x);
    if(K % 2 != 0){
        return nhanMaTran(arr, y);
    }else{
        return y;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        long K; cin >> N >> K;
        
        vector<vector<long long> > arr(N, vector<long long>(N));
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++) cin >> arr[i][j];
        }
        
        vector<vector<long long> > res = luyThuaMaTran(arr, K);

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        
    }
}