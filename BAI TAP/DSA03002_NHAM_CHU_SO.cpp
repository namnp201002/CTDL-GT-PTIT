#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

long long convertString(long long X, int num1, int num2){
    char s[30];
    int index = 0;
    while(X > 0){
        s[index] = (X%10+'0');
        if(s[index] == num1 + '0') s[index] = num2 +'0';
        X/=10;
        index++;
    }
    
    int l = 0, r = index-1;
    while(l < r) swap(s[l++], s[r--]);

    return atoll(s); // ham chuyen doi chuoi ve so nguyen long long

}

int main(){
    long long A, B; cin >> A >> B;

    cout << convertString(A, 6, 5) + convertString(B, 6, 5);
    cout << " ";
    cout << convertString(A, 5, 6) + convertString(B, 5, 6);

    return 0;  
}