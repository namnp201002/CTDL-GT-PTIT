#include<iostream>

using namespace std;

void chuyen(int n, char a, char c){
    cout << "Chuyen dia thu " << n << " tu cot " << a << " sang cot " << c << endl;
}

void thapHaNoi(int n, char a, char b, char c){
    if(n==1) {
        chuyen(n, a, c);
    }else{
        thapHaNoi(n-1, a, c, b);
        chuyen(n, a, c);
        thapHaNoi(n-1, b, a, c);
    }
}

int main(){
    thapHaNoi(3, 'A', 'B', 'C');
    return 0;
}