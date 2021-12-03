//2193
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n;
    long long num[91] = {0};
    num[1] = num[2] = 1;

    cin >> n;
    for (int i = 3; i <= 90; i++)
    {
        num[i] = num[i - 1] + num[i - 2];
    }

    cout << num[n];
    return 0;
}
