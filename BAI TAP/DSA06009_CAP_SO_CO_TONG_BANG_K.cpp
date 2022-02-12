#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	std::cin >>t;
	while(t--){
		map<int, int> m;
		int n, sum;
		cin >> n >> sum;
		int a[n+5];
		
		for(int i=0; i<n; i++){
			cin >> a[i];
			m[a[i]]++;
		}
		int count=0;
		for(int i=0; i<n; i++){
			count += m[sum - a[i]];
			if(sum-a[i]==a[i]){
				count--;
			}
		}
		cout << count/2 << endl;
	}
	return 0;
}