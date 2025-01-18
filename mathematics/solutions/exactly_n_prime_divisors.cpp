#include <iostream>

using namespace std;

int main()
{
    int m, n; cin >> m >> n;

    int cnt[m + 1];
    for (int i = 0; i <= m; i++)
    {
        cnt[i] = 0;
    }

    int ans = 0;
    for (int i = 2; i <= m; i++)
    {
        if (cnt[i] == n)
        {
            ans++;
        }
        if (cnt[i])
        {
            continue;
        }
        for (int j = 2 * i; j <= m; j += i)
        {
            cnt[j]++;
        }
    }
    
    cout << ans << '\n';
    return 0;
}