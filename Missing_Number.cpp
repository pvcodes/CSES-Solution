#include <bits/stdc++.h>
using namespace std;

#define ui unsigned int

int32_t main() {
    ui n;
    cin >> n;

    bool arr[n] = {0};

    for (ui i = 0; i < n - 1; i++) {
        ui x;
        cin >> x;
        arr[x - 1] = 1;
    }

    for (ui i = 0; i < n; i++) {
        if (!arr[i]) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}