class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
        int n=nums.size();
        int sum=0;
        
        int a=(((n)*(n+1))/2);
        for(int num:nums){
            sum+=num;
        }
        return a-sum;
    }
};