//15988
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n;
    long long sum[1000001];
    long long result;

    cin >> n;
    sum[1] = 1;
    sum[2] = 2;
    sum[3] = 4;

    for (int t = 0; t < n; t++)
    {
        cin >> result;
        for (int i = 4; i <= result; i++)
        {
            sum[i] = (sum[i - 1] + sum[i - 2] + sum[i - 3]) % 1000000009;
        }
        cout << (sum[result]) % 1000000009 << "\n";
    }

    return 0;
}
