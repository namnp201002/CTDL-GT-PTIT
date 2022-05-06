#include<iostream>

using namespace std;

int giaiThuaDeQuy(int N){
    if(N == 1) return 1;
    return N*giaiThuaDeQuy(N-1);
}

int giaiThuaFor(int N){
    int ketQua = 1;
    for(int i = 1; i <= N; i++){
        ketQua *= i;
    }
    return ketQua;
}

int main(){
    cout << giaiThuaDeQuy(5) << endl;
    cout << giaiThuaFor(5);
    return 0;
}