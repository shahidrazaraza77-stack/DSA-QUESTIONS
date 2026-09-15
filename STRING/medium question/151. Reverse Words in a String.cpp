#include <iostream>
#include <vector>
#include<algorithm>
#include <sstream>
using namespace std;




class Solution {
public:
    string reverseWords(string s) {

        int n = s.length();
        string ans = "";

        // Step 1: Reverse the complete string
        reverse(s.begin(), s.end());

        for (int i = 0; i < n; i++) {
            string word = "";

            // Step 2: Extract one word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Step 3: Reverse the extracted word
            reverse(word.begin(), word.end());

            // Step 4: Add the word to answer
            if (word.length() > 0) {
                ans += " " + word;
            }
        }

        // Step 5: Remove the first extra space
        return ans.substr(1);
    }
};


// optimal approach


class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string ans;

        for (int i = 0; i < words.size(); i++) {
            if (i > 0) {
                ans += " ";
            }

            ans += words[i];
        }

        return ans;
    }
};