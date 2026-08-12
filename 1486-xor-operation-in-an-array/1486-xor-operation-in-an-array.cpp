class Solution {
public:
    int xorOperation(int n, int start) {
        return (n==1)?start:start^xorOperation(n-1,start+2);
    }
};