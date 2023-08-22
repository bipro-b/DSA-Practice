#include <bits/stdc++.h>
using namespace std;

int RepeatingFirstElement(int arr[], int n) {
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++) {
        idx[i] = -1;
    }
    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (idx[arr[i]] != -1) {
            mn = min(mn, idx[arr[i]]);
        } else {
            idx[arr[i]] = i;
        }
    }
    if (mn == INT_MAX) {
        return -1;
    } else {
        return mn;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ans = RepeatingFirstElement(arr, n);
    if (ans == -1) {
        cout << "No repeating element found." << endl;
    } else {
        cout << "First repeating element found at index: " << ans << endl;
    }

    return 0;
}
