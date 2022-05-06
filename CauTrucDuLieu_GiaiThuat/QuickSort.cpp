#include<iostream>
#include<math.h>

using namespace std;

void Quick(int a[], int left, int right){
    int i, j ,x;

    x = a[(left+right)/2];
    
    i = left; j = right;

    do{
        while(a[i] < x) i++;
        while(a[j] > x) j--;
        if(i<=j){
            swap(a[i], a[j]);
            i++; j--;
        }
    }while(i<=j);

    if(left<j){
        Quick(a, left, j);
    }
    if(right > i){
        Quick(a, i, right);
    }
}

int main(){
    int a[10] = {5, 9, 2, 1, 4, 6, 7, 0, 8, 3};

    Quick(a, 0, 9);

    for(int i = 0; i <= 9; i++){
        cout << a[i] << " ";
    }



    return 0;
}