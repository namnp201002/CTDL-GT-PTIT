#include<bits/stdc++.h>

using namespace std;

string binary_string(int N){
	string s = "";
	
	while(N != 0){
		int x = N%2;
		s += to_string(x);
		N/=2;		
	}
	reverse(s.begin(), s.end());
	
	return s;
}

int main(){
	int t; cin >> t;
	while(t--){
		int N; cin >> N;
		for(int i = 1; i <= N; i++){
			cout << binary_string(i) << " ";
		}
		cout << endl;
	}
	return 0;
}
