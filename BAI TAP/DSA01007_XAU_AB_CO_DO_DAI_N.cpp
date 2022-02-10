#include<iostream>
#include<string.h>

using namespace std;
int check[2] = {0,1};
int s[10000];

void xauABCoDoDaiN(int N, int index){
    for(int i = 0; i <= 1; i++){
        s[index] = check[i];
        if(index == N-1){
            for(int i = 0; i < N; i++){
                if(s[i] == 0) cout << "A";
                else cout << "B";
            }
            cout << " ";
        }else xauABCoDoDaiN(N, index+1);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int N; cin >> N;
        xauABCoDoDaiN(N, 0);
        cout << endl;
    }
    return 0;
}