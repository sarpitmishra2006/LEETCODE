class Solution {
public:
    int arraySign(vector<int>& nums) {
        int s = 1;
        for (int x : nums) {
            if (x == 0) return 0;
            if (x < 0) s *= -1;
        }
        return s;
    }
};