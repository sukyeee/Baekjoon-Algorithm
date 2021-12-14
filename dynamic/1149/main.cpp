//1149
#include <iostream>
#include <cmath>
using namespace std;

long long MIN(long long a, long long b)
{
    if (a < b)
        return a;
    else
        return b;
}
long long MIN3(long long a, long long b, long long c)
{
    return (a < c ? (a < b ? a : b) : (b < c ? b : c));
}

int main(int argc, const char *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int N;
    long long RGB[1001][3] = {
        0,
    };
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> RGB[i][0] >> RGB[i][1] >> RGB[i][2];

    for (int i = 0; i < N - 1; i++)
    {
        RGB[i + 1][0] = MIN(RGB[i + 1][0] + RGB[i][1], RGB[i + 1][0] + RGB[i][2]);
        RGB[i + 1][1] = MIN(RGB[i + 1][1] + RGB[i][0], RGB[i + 1][1] + RGB[i][2]);
        RGB[i + 1][2] = MIN(RGB[i + 1][2] + RGB[i][0], RGB[i + 1][2] + RGB[i][1]);
    }
    cout << MIN3(RGB[N - 1][0], RGB[N - 1][1], RGB[N - 1][2]);

    return 0;
}
