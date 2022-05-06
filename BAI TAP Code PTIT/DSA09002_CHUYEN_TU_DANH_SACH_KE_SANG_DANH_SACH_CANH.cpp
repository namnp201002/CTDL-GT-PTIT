#include<bits/stdc++.h>

using namespace std;

void nhap(vector<vector<int> >& arr, string s, int i){
    getline(cin, s);
    stringstream ss(s);
    string token;
    while(ss >> token){
        int x = stoi(token);
        arr[x][i] = 1;
        arr[i][x] = 1;
    }
}

int main(){

    int N; cin >> N;
        
    vector<vector<int> > arr(N+1, vector<int>(N+1));
    vector<int> vs(N+1);
    cin.ignore();
    for(int i = 1; i <= N; i++){
        string s;
        nhap(arr, s, i);
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(!vs[j] && arr[i][j]){
                vs[i] = 1;
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}