#include <iostream>

using namespace std;

int vs[100], e[100], s[100];

void DfsNx(int u, int arr[100][100], int n)
{
    int top = 1;
    s[top] = u;
    vs[u] = 1;
    while (top > 0)
    {
        int v = s[top];
        int ok = 1;
        for (int i = 1; i <= n; i++)
            if (vs[i] == 0 && arr[v][i] == 1)
            {
                top++;
                s[top] = i;
                vs[i] = 1;
                e[i] = v;
                ok = 0;
                cout << i << "(" << v << ")" << endl;
                break;
            }
        if (ok == 1)
            top--;
    }
    // for(int i = 1; i <= n; i++) cout << i << "-" << e[i] << endl;
}
void DfsDequy(int u, int n, int arr[100][100])
{
    int v;
    cout << u << " ";
    vs[u] = 1;
    for (v = 1; v <= n; v++)
        if (vs[v] == 0 && arr[u][v] == 1)
        {
            e[v] = u;
            DfsDequy(v, n, arr);
        }
}
int main()
{
    int N;
    cin >> N;
    int arr[100][100];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
            cin >> arr[i][j];
    }
    // DfsNx(1, arr, N);
    DfsDequy(1, N, arr);
}