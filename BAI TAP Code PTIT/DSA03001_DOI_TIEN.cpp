#include<iostream>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        int count = 0;
        if(N >= 1000){
            count += N/1000;
            N%=1000;
        }
        if(N >= 500){
            count += N/500;
            N%=500;
        }
        if(N >= 200){
            count += N/200;
            N%=200;
        }
        if(N >= 100){
            count += N/100;
            N%=100;
        }
        if(N >= 50){
            count += N/50;
            N%=50;
        }
        if(N >= 20){
            count += N/20;
            N%=20;
        }
        if(N >= 10){
            count += N/10;
            N%=10;
        }
        if(N >= 5){
            count += N/5;
            N%=5;
        }
        if(N >= 2){
            count += N/2;
            N%=2;
        }
        count += N;
        cout << count << endl;
    }
    return 0;
}