#include<iostream>
#include<vector>
#include<string>
using namespace std ; 
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int count = 0;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count the last word's characters
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};