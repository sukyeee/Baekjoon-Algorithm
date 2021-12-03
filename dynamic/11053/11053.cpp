//11053
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    cin.tie(NULL);
    ios::sync_with_stdio(0);

    int n;
    int lcs_front[1001] = {1};
    int inp[1001] = {0};
    int max_index = 0;
    lcs_front[0] = 1;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> inp[i];

    //정방향
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        int max = 1;
        int max_index = 0;
        for (int j = 0; j < i; j++)
        { //전 배열
            if (inp[i] == inp[j])
            {
                lcs_front[i] = lcs_front[j];
                flag = 1;
                break;
            }
            else if (inp[i] > inp[j])
            {

                if (lcs_front[j] >= max)
                {
                    max = lcs_front[j];
                    max_index = j;
                }
            }
        }
        if (flag != 1)
            lcs_front[i] = lcs_front[max_index] + 1;
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (lcs_front[i] > result)
            result = lcs_front[i];
    }

    cout << result;

    return 0;
}
