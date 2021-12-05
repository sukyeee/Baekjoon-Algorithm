//1912
#include <iostream>
using namespace std;

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main(int argc, const char *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    long long seq[100001][2] = {
        0,
    };
    long long inp[100001] = {
        0,
    };

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> inp[i];
    seq[0][0] = seq[0][1] = inp[0];

    for (int i = 1; i < n; i++)
    {
        seq[i][0] = max(seq[i - 1][0], seq[i - 1][1]);
        seq[i][1] = max(inp[i], seq[i - 1][1] + inp[i]);
    }
    long long result = max(seq[n - 1][0], seq[n - 1][1]);
    cout << result;
    return 0;
}
