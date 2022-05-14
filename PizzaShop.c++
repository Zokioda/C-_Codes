#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int C, l, d;
    // C --> Number of customers
    // l --> how many things that customer likes
    // d --> how many things that customer dislikes
    vector<string> L, D;
    scanf("%d", &C);
    vector<string> LP;
    string like, dislike;
    // Taking Inputs
    for (int i = 0; i < C; i++)
    {
        scanf("%d", &l);
        for (int j = 0; j < l; j++)
        {
            scanf("%d", &like);
            L.push_back(like);
        }
        scanf("%d", &d);
        for (int k = 0; k < d; k++)
        {
            scanf("%d", &dislike);
            D.push_back(dislike);
        }
    }
    // Deleting common ingredients in Liking and Disliking
    vector<string>::iterator it = L.begin();
    for (int i = 0; i < L.size(); i++)
    {
        for (int j = 0; j < D.size(); j++)
        {
            if (L[i] == D[j])
            {
                L.erase(it);
            }
        }
        it++;
    }
    // Printing the output

    printf("%d", L.size(), " ", L);
    return 0;
}