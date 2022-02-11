#include<bits/stdc++.h>

using namespace std;

void hopCua2DaySo(int M, int N, int arr1[], int arr2[]){
    set<int> s;
    for(int i = 0; i < M; i++) s.insert(arr1[i]);
    for(int i = 0; i < N; i++) s.insert(arr2[i]);
    for(set<int>::iterator it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

}

void giaoCua2DaySo(int M, int N, int arr1[], int arr2[]){
    int i = 0, j = 0;
    while(i < M && j < N){
        if(arr1[i] == arr2[j]){
            cout << arr1[i] << " ";
            i++; j++;
        }else if (arr1[i] < arr2[j]) i++;
        else j++;
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        int M, N; cin >> M >> N;

        int array1[M+5], array2[N+5];
        for(int i = 0; i < M; i++) cin >> array1[i];
        for(int i = 0; i < N; i++) cin >> array2[i];

        sort(array1, array1+M);
        sort(array2, array2+N);
        
        hopCua2DaySo(M, N, array1, array2);

        giaoCua2DaySo(M, N, array1, array2);

    }

    return 0;
}