#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> result(1001, vector<int>(1001));

int main(){
    int T; cin >> T;
    while(T--){
        string s1 = "_", s2 = "_";
        string s;
        cin >> s;
        s1 += s;
        cin >> s;
        s2 += s;

        int m = s1.size(), n = s2.size();
        

        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(s1[i] == s2[j]){
                    result[i][j] = result[i-1][j-1] + 1;
                }else result[i][j] = max(result[i-1][j], result[i][j-1]);
            }
        }
        cout << result[m-1][n-1] << endl;

    }
    return 0;
}