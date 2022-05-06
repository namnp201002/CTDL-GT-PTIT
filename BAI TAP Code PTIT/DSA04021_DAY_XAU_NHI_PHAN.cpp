#include <bits/stdc++.h>
using namespace std;
long long F[100];
char FiboWork(int n, long long k)
{
    if (n == 1)
        return '0';
    if (n == 2)
        return '1';
    if (k <= F[n - 2])
        return FiboWork(n - 2, k);
    return FiboWork(n - 1, k - F[n - 2]);
}
int main()
{
    int t;
    cin >> t;
    F[0] = 0;
    F[1] = 1;
    for (int i = 2; i <= 92; i++)
    {
        F[i] = F[i - 1] + F[i - 2];
    }
    while (t--)
    {

        int n;
        long long k;
        cin >> n >> k;
        cout << FiboWork(n, k) << "\n";
    }
}
/*

    0
    1
    0/1
    1/01
    01/101
    101/01101
    01101/10101101

*/