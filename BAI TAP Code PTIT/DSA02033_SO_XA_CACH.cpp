#include<iostream>
#include<math.h>

using namespace std;
int check[10000], arr[10000];

void show(int N, int arr[]){
    for(int i = 1; i <=N; i++) cout << arr[i];
    cout << endl;
}

void sinhHoanVi(int m, int N){
    if(m > N){
        show(N, arr);
    }
    for(int i = 1; i <= N; i++){
        if(check[i] == 0){
            arr[m] = i;
            if(m > 1 && abs(arr[m] - arr[m-1]) == 1) continue;
            check[i] = 1;
            sinhHoanVi(m+1, N);
            check[i] = 0;
        }
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        sinhHoanVi(1, N);
    }
    return 0;
}