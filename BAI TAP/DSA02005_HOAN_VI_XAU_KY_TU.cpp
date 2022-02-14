#include<iostream>
#include<vector>

using namespace std;

vector<bool> check(50, false);
vector<int> arr(50);

void hoanViXauKyTu(string s, int m, int N){
    if(m > N){
        for(int i = 0; i < s.size(); i++){
            cout << s[arr[i]];
        }
        cout << " ";
    }

    for(int i = 0; i < s.size(); i++){
        if(!check[i]){

            arr[m] = i;
            check[i] = true;

            hoanViXauKyTu(s, m+1, N);

            check[i] = false;
        }
    }

}
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;

        hoanViXauKyTu(s, 0, s.size()-1);
        
        cout << endl;
    }
    return 0;
}