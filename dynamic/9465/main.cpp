//9465
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int t, n;
    cin >> t;

    while (t--)
    {
        int sticker[2][100002] = {0};
        cin >> n;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 2; j < n + 2; j++)
            {
                cin >> sticker[i][j];
            }
        }
        sticker[0][0] = sticker[0][1] = sticker[1][0] = sticker[1][1] = 0;

        //1번째전 대각선, 2번째전 대각선 비교해서 큰값 더하기

        for (int i = 2; i < n + 2; i++)
        {

            if (sticker[1][i - 1] > sticker[1][i - 2])
            {
                sticker[0][i] += sticker[1][i - 1];
            }
            else
            {
                sticker[0][i] += sticker[1][i - 2];
            }

            if (sticker[0][i - 1] > sticker[0][i - 2])
            {
                sticker[1][i] += sticker[0][i - 1];
            }
            else
            {
                sticker[1][i] += sticker[0][i - 2];
            }
        }

        if (sticker[0][n + 1] > sticker[1][n + 1])
            cout << sticker[0][n + 1] << "\n";
        else
            cout << sticker[1][n + 1] << "\n";
    }
    return 0;
}
