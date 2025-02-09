#include <iostream>

using namespace std;

int main()
{
    int n, q; cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // prefix_sum[idx] = sum(0, idx)
    vector<int> prefix_sum(n, 0);
    prefix_sum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r; cin >> l >> r;
        if (l == 0)
        {
            cout << prefix_sum[r] << '\n';
        }
        else
        {
            cout << prefix_sum[r] - prefix_sum[l - 1] << '\n';
        }
    }
    return 0;
}