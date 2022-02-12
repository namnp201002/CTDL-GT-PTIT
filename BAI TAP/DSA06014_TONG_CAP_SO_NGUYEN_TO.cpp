#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<bool> check(1000000, true);

    check[1] = false;
    check[0] = false;

    for(int i = 2; i*i <= 1000000; i++){
        if(check[i]){
            for(int j = i*i; j <= 1000000; j+=i){
                check[j] = false;   
            }
        }
    }
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        
        int checkkkk = 0;
        
        for(int i = 2; i <= N/2; i++){
            if(check[i]==true && check[N-i]==true) {
                checkkkk = 1;
                cout << i << " " << N-i;
                break;
            }
        }
        if(checkkkk == 0) cout << "-1";
        cout << endl;
    }
    return 0;
}