class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        
        // If needle is longer than haystack, it can't be a substring
        if (m > n) return -1;
        
        // Loop through haystack up to the point where needle can still fit
        for (int i = 0; i <= n - m; i++) {
            // Check if the substring matches needle
            if (haystack.substr(i, m) == needle) {
                return i;
            }
        }
        
        return -1;
    }
};
