#include<bits/stdc++.h>

using namespace std;

// NGUYEN PHUONG NAM - B20DCCN457 - NHOM 12 CTDLGT

//  =========== GIAI THUA ===========
/*
int giaiThua(int N){
    if(N == 0) 
        return 1;
    else 
        return N*giaiThua(N-1);
}
int main(){
    int N; cin >> N;
    cout << giaiThua(N);
    return 0;
}
*/

// =========== FIBONACCI ===========
/* 
int Fib(int N){
    if(N == 0) return 0;
    if(N == 1) return 1;
    return Fib(N-1) + Fib(N-2);
}

int main(){
    int N; cin >> N;
    cout << Fib(N);
    return 0;
}
*/

//========== THAP HA NOI =========
/* 
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
    int N; cin >> N;
    thapHaNoi(N, 'A', 'B', 'C');
    return 0;
}
*/

// =========== BAI TOAN XEP HAU ===========
/*
int arr[50];

bool kiemTra(int a, int b){
    for(int i = 1; i < a; i++){
        if(arr[i] == b || abs(arr[i]-b) == abs(i-a)) return false;
    }
    return true;
}
void sapXepQuanHau(int j, int N, int& count){
    for(int i = 1; i <= N; i++){
        if(kiemTra(j, i)){
            arr[j] = i;
            if(j == N){
                count++;
            }
            sapXepQuanHau(j+1, N, count);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int N; cin >> N;
        int count  = 0;
        sapXepQuanHau(1, N, count);
        cout << count << endl;
    }

    return 0;
}
*/


//=========== BAI TOAN CAI TUI 0-1 ============
/*
struct caitui
{   
    int khoiLuong, giaTri;
};

int main(){
    int t; cin >> t; 
    while(t--){
        int N, V; cin >> N >> V;
        vector<caitui> arr(N+1);

        for(int i = 1; i <= N; i++) cin >> arr[i].khoiLuong;
        for(int i = 1; i <= N; i++) cin >> arr[i].giaTri;

        vector<vector<int>> maxValue(N+1, vector<int>(V+1));

        for(int i = 1; i <= N; i++){
            for(int L = 1; L <= V; L++){
                maxValue[i][L] = maxValue[i-1][L];
                if(L >= arr[i].khoiLuong){
                    if(maxValue[i-1][L-arr[i].khoiLuong] + arr[i].giaTri > maxValue[i-1][L]){
                        maxValue[i][L] = maxValue[i-1][L-arr[i].khoiLuong] + arr[i].giaTri;
                    }
                }
            }
        }
        cout << maxValue[N][V] << endl;

    }
    return 0;
}

*/

// =========== CHUOI CON CHUNG LON NHAT ==========
/*
#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> result(1001, vector<int>(1001));

int main(){
    int T; cin >> T;
    while(T--){
        string s1 = "_", s2 = "_";
        string s;
        cin >> s;
        s1 += s;
        cin >> s;
        s2 += s;

        int m = s1.size(), n = s2.size();
        

        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(s1[i] == s2[j]){
                    result[i][j] = result[i-1][j-1] + 1;
                }else result[i][j] = max(result[i-1][j], result[i][j-1]);
            }
        }
        cout << result[m-1][n-1] << endl;

    }
    return 0;
}
*/

// ========= QUAN MA DI TUAN =========
/*
#include <iostream>
using namespace std;

int h[11][11] = {0};
int n;
int a[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int b[8] = {1, -1, 2, -2, 2, -2, 1, -1};

void in()
{
	for (int j = 1; j <= n; j++)
	{
		for (int l = 1; l <= n; l ++)
			cout << h[j][l] << " ";
		cout << endl;
	}
}

void Try(int i, int x, int y)
{
	int u, v;
	for (int k = 0; k <= 7; k++)
	{
		u = x + a[k];
		v = y + b[k];
		if (1 <= u && u <= n && 1 <= v && v <= n && h[u][v] == 0)
		{
			h[u][v] = i;
			if (i < n * n)
			{
				Try(i + 1, u, v);
				h[u][v] = 0;
			}
			else in();		
		}
	}
}

int main()
{
	int x, y;
	cin >> n >> x >> y;
	h[x][y] = 1;
	Try(2, x, y);
}
*/