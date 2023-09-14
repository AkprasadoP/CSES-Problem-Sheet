#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;
        int n = x.size();
        int index = n;
        for (int i = 0; i < n; i++) {
            if (x[i] >= '5') {
                index = i;
                break;
            }
        }
        
        if (index == n && index != 0) {
            cout << x << endl;
            continue;
        }

        if (index == 0 && x[index] >= '5') {
            cout << 1;
            for (int i = 0; i < n; i++) {
                cout << 0;
            }
            cout << endl;
            continue;
        } else if (index == 0 && x[index] < '5') {
            cout << x << endl;
            continue;
        }
        
        int flag = 0;
        index = index - 1;
        while (index >= 0) {
            x[index] += 1;
            if (x[index] > '9') {
                x[index] = '0';
                index--;
            } else {
                break;
            }
        }
        cout << x << endl;
    }

    return 0;
}
