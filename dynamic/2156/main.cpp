//2156
#include <iostream>
using namespace std;
#define SIZE 10001

long long MAX(long long a, long long b, long long c)
{
    return (a > c ? (a > b ? a : b) : (b > c ? b : c));
}

int main(int argc, const char *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n;
    int wine[SIZE];
    long long dp[SIZE];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> wine[i];
    dp[0] = wine[0];
    dp[1] = wine[0] + wine[1];
    dp[2] = MAX(dp[0] + wine[2], dp[1], wine[1] + wine[2]);

    for (int i = 3; i < n; i++)
    {
        dp[i] =
            MAX(dp[i - 3] + wine[i] + wine[i - 1],
                dp[i - 2] + wine[i],
                dp[i - 1]);
    }
    cout << dp[n - 1];

    return 0;
}
