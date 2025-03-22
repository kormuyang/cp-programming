#include <iostream>

using namespace std;

// Algotihms: prefix sum, query sum

int main()
{
    int n, q; cin >> n >> q;
    vector<int> qsum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> qsum[i];
        qsum[i] += qsum[i - 1];
    }

    while (q--)
    {
        int l, r; cin >> l >> r;
        cout << qsum[r + 1] - qsum[l] << '\n';
    }
    return 0;
}