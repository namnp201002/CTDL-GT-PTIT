#include<iostream>
#include<vector>

using namespace std;

int main(){
    int N; cin >> N;

    vector<vector<int> > arr(N+1, vector<int>(N+1));
    string s = "";
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> arr[i][j];
            if(arr[i][j]) s += to_string(j) + ' '; 
        }
        s += '\n';
    }
    cout << s;

    return 0;
}