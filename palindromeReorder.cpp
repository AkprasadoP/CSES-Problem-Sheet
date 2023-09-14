#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    unordered_map<char, int> charCount;

    for (char c : str) {
        charCount[c]++;
    }

    int oddCount = 0;
    char oddChar = '\0';

    for (auto x : charCount) {
        if (x.second % 2 == 1) {
            oddCount++;
            oddChar = x.first;
        }
    }

    if (oddCount > 1 || (oddCount == 1 && str.length() % 2 == 0)) {
        cout << "NO SOLUTION" << endl;
    } else {
        string firstHalf = "";
        string secondHalf = "";

        for (auto x : charCount) {
            string s(x.second / 2, x.first);
            firstHalf = firstHalf + s;
            secondHalf = s + secondHalf;
        }

        string palindrome = firstHalf;
        if (oddCount == 1) {
            palindrome += oddChar;
        }
        palindrome += secondHalf;
        cout << palindrome << endl;
    }

    return 0;
}
