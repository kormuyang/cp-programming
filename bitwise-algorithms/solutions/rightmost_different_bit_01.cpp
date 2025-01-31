#include <iostream>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    //       11 = 0b1011
    //        9 = 0b1001
    // (1 << 0) =      1
    // (1 << 1) =     10
    //        & =     10
    //        & =     00
    // (1 << 2) =    100

    if (n == m)
    {
        cout << "-1\n";
        return 0;
    }
    for (int i = 0; (1 << i) <= n or (1 << i) <= m; i++)
    {
        if (((m & (1 << i))) != (n & (1 << i)))
        {
            cout << (i + 1) << '\n';
            break;
        }
    }
    return 0;
}