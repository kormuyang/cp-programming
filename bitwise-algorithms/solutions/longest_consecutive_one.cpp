#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0;
    while (n)
    {
        cnt++;
        n = (n & (n << 1));
    }
    //        A_0 = 0b1110111100
    // (A_0 << 1) = 0b1101111000
    //        A_1 = 0b1100111000
    cout << cnt << '\n';
    return 0;
}