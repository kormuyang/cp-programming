#include <iostream>

using namespace std;

// Algotihms: prefix sum, query sum

int main()
{
    int n; cin >> n;
    vector<int> qsum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> qsum[i];
        qsum[i] += qsum[i - 1];
    }

    for (int i = 2; i < n; i++)
    {
        if (qsum[i - 1] - qsum[0] == qsum[n] - qsum[i])
        {
            cout << i - 1 << '\n';
            return 0;
        }
    }

    cout << "-1\n";
    return 0;
}