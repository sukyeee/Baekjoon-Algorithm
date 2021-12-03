//14002
#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    int n;
    int lcs[1001] = {1};
    int inp[1001] = {0};
    int max_index = 0;
    lcs[0] = 1;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> inp[i];
    for (int i = 0; i < n; i++)
        lcs[i] = 1; //초기화

    //정방향
    for (int i = 0; i < n; i++)
    {
        int max = 0;

        for (int j = 0; j < i; j++)
        {
            if (inp[i] > inp[j])
            {
                if (max < lcs[j])
                    max = lcs[j];
            }
        }
        lcs[i] = max + 1;
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if (lcs[i] > result)
            result = lcs[i];
    }

    int result_lcs[1001] = {0};

    cout << result << "\n";
    int max_lcs = result;
    int j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (max_lcs == lcs[i])
        {
            result_lcs[result - j - 1] = inp[i];
            max_lcs--;
            j++;
        }
    }

    for (int i = 0; i < j; i++)
        cout << result_lcs[i] << " ";
    return 0;
}
