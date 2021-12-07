//1699
#include <iostream>
#include <cmath>
using namespace std;

int MIN(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main(int argc, const char *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n;
    int square[100001] = {0};
    // square[1]= 1;

    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        square[i] = 99999;
        for (int j = 1; j * j <= i; j++)
        {
            square[i] = min(square[i], square[i - j * j] + 1);
        }
    }
    cout << square[n];
    return 0;
}
