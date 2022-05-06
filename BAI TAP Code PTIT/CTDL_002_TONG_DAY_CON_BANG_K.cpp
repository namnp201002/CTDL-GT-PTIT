#include<iostream>
using namespace std;
int a[2] = {0, 1};
int s[10000] = {0};
int count = 0;
void show(int arr[], int N, int s[]){
    for(int i = 0; i < N ; i++){
        if(s[i] == 1) cout << arr[i] << " ";
    }
}
void tongDayCon(int n, int arr[],int s[], int K){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 1){
            sum += arr[i];
        }
    }
    if(sum == K){
        count ++;
        show(arr, n, s);
        cout << endl;
    }
}
void lietKe(int index, int n, int arr[], int K){
    for(int i = 0; i <= 1; i++){
        s[index] = a[i];
        if(index == n - 1){
            tongDayCon(n, arr, s, K);
        }else{
            lietKe(index+1, n, arr, K);
        }
    }
}
int main(){
    int n; cin >> n;
    int K; cin >> K;
    int arr[n+5];
    for(int i = 0; i < n; i++) cin >> arr[i];
    lietKe(0, n, arr, K);
    cout << count;
    return 0;
}