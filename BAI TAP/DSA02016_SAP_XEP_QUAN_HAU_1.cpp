#include<iostream>
#include<math.h>

using namespace std;

int count;
int arr[50];

bool kiemTra(int a, int b){
    for(int i = 1; i < a; i++){
        if(arr[i] == b || abs(arr[i]-b) == abs(i-a)) return false;
    }
    return true;
}

void sapXepQuanHau(int j, int N){
    for(int i = 1; i <= N; i++){
        if(kiemTra(j, i)){

            arr[j] = i;
            if(j == N){
                count++;
            }
            sapXepQuanHau(j+1, N);
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        count  = 0;
        sapXepQuanHau(1, N);
        cout << count << endl;
    }

    return 0;
}