#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> ar(n);
    unordered_map<int, int> p;

    for (int i = 0; i < n; ++i) {
        cin >> ar[i];
        int c = x - ar[i];
        if (p.find(c) != p.end()) {
            cout << p[c] + 1 << " " << i + 1 << endl;
            return 0;
        }
        p[ar[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
