#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 5, 5, 7, 8};
    int target = 5;

    // binary_search -> true or false
    cout << binary_search(arr.begin(), arr.end(), target) << '\n';

    // lower_bound -> index of first element >= target
    cout << lower_bound(arr.begin(), arr.end(), target) - arr.begin() << '\n';
    if (lower_bound(arr.begin(), arr.end(), target) == arr.end()) {
        cout << "Not found\n";
    } else if (*lower_bound(arr.begin(), arr.end(), target) == target) {
        cout << "Found\n";
    } else {
        cout << "Not found\n";
    }

    // upper_bound -> index of first element > target
    cout << upper_bound(arr.begin(), arr.end(), target) - arr.begin() << '\n';

    return 0;
}