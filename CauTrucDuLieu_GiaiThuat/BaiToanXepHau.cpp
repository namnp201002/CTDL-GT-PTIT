#include<iostream>
#include<math.h>
#include<vector>

using namespace std;

vector<int> arr(20);

bool kiemTra(int a, int b){
    for(int i = 1; i < a; i++){
        // kiem tra xem co the dat quan hau tai vi tri nay hay khong
        if(arr[i] == b || abs(arr[i]-b) == abs(i-a)) return false;
    }
    return true;
}

void sapXepQuanHau(int j, int N, int& count){
    for(int i = 1; i <= N; i++){
        if(kiemTra(j, i)){
            arr[j] = i;
            if(j == N){
                count++;
            }
            sapXepQuanHau(j+1, N, count);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        int count  = 0;
        sapXepQuanHau(1, N, count);
        cout << count << endl;
    }
    return 0;
}