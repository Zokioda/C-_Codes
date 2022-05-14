#include <stdio.h>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    int N, m, n, finalCost = 0;
    vector<int> x, y;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d%d", &m, &n);
        x.push_back(m);
        y.push_back(n);
    }
    for (int i = 0; i < N - 1; i++)
    {
        finalCost += min(abs(x[i + 1] - x[i]), abs(y[i + 1] - y[i]));
    }
    printf("%d", finalCost);

    return 0;
}