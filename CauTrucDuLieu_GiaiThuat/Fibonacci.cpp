#include<iostream>

using namespace std;

int fibDeQuy(int N){
    if(N == 0) return 0;
    if(N == 1) return 1;
    return fibDeQuy(N-1) + fibDeQuy(N-2);
}

int fibQHD(int N){
    int F[50];
    F[0] = 0; F[1] = 1;
    for(int i = 2; i <= N; i++){
        F[i] = F[i-1] + F[i-2];
    }
    return F[N];
}

int main(){
    cout << fibDeQuy(8) << endl;
    cout << fibQHD(8);
    return 0;
}