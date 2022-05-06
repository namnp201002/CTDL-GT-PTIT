#include<iostream>
#include<vector>

using namespace std;

struct caitui
{   
    int khoiLuong, giaTri;
};

int main(){
    int t; cin >> t; 
    while(t--){
        int N, V; cin >> N >> V;
        vector<caitui> arr(N+1);

        for(int i = 1; i <= N; i++) cin >> arr[i].khoiLuong;
        for(int i = 1; i <= N; i++) cin >> arr[i].giaTri;

        vector<vector<int>> maxValue(N+1, vector<int>(V+1));

        for(int i = 1; i <= N; i++){
            for(int L = 1; L <= V; L++){
                maxValue[i][L] = maxValue[i-1][L];
                if(L >= arr[i].khoiLuong){
                    if(maxValue[i-1][L-arr[i].khoiLuong] + arr[i].giaTri > maxValue[i-1][L]){
                        maxValue[i][L] = maxValue[i-1][L-arr[i].khoiLuong] + arr[i].giaTri;
                    }
                }
            }
        }
        cout << maxValue[N][V] << endl;

    }
    return 0;
}