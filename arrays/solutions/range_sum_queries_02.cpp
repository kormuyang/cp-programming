#include <iostream>

using namespace std;

int main()
{
    int n, q; cin >> n >> q;
    vector<int> a(n + 1), prefix_sum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }
    while (q--)
    {
        int l, r; cin >> l >> r;
        cout << prefix_sum[r + 1] - prefix_sum[l] << '\n';
    }
    return 0;
}