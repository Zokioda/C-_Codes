#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Assignments
    int n, k, i, j, q;
    cin >> n >> q;
    int b[n][k];

    // INPUT
    for (i = 0; i < n; i++)
    {
        cin >> k;
        int a[k];
        for (j = 0; j < k; j++)
        {
            cin >> a[j];
            b[i][j] = a[j];
        }
    }
    // QUERY
    int query[q][2];
    for (int x = 0; x < q; x++)
    {
        cin >> i >> j;
        query[x][0] = i;
        query[x][1] = j;
    }

    // OUTPUT
    for (int z = 0; z < q; z++)
    {
        cout << b[query[z][0]][query[z][1]] << endl;
    }

    return 0;
}