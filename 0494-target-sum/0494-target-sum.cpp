class Solution {
public:
    int solve(vector<int>& n, int i, int sum, int t) {
        if(i==n.size()){
            if(t==sum)
                return 1;
            return 0;
        }
        return solve(n,i+1,sum+n[i],t)+solve(n,i+1,sum-n[i],t);
    }
        int findTargetSumWays(vector<int>& n,int t){
            return solve(n,0,0,t);
        }
    
        
};