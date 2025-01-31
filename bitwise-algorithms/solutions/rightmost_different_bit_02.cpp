#include <iostream>
#include <cmath>

using namespace std;

int get_rightmost_set_bit(int n)
{
    return log2(n & -n) + 1;
}

//  10 = 0b000...1010
// -10 = 0b111...0110

int main()
{
    int n, m; cin >> n >> m;
    if (n == m)
    {
        cout << "-1\n";
        return 0;
    }
    cout << get_rightmost_set_bit(n ^ m) << '\n';
    return 0;
}