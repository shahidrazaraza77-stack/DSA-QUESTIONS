// C++ program to search a character in a string

#include <iostream>
using namespace std;

// function to find the first occurrence of ch in s
int findChar(string &s, char ch) {
    int n = s.length();
    for (int i = 0; i < n; i++) {

        // If the current character is equal to ch,
        // return the current index
        if (s[i] == ch)
            return i;
    }

    // If we did not find any occurrence of ch,
    // return -1
    return -1;
}

int main() {
    string s = "geeksforgeeks";
    char ch = 'k';

    cout << findChar(s, ch) << "\n";
    return 0;
}