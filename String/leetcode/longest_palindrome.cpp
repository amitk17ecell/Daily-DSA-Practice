class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        
        int length = 0;
        bool oddFound = false;
        
        for (auto &p : freq) {
            if (p.second % 2 == 0) {
                length += p.second;
            } else {
                length += p.second - 1;  // use the even part
                oddFound = true;        // keep track of odd count
            }
        }
        
        if (oddFound) length += 1;  // one odd can be placed in the center
        return length;
    }
};