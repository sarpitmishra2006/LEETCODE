class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        long long f=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            f+=(long long) i*nums[i];
        }
        long long maxV=f;
        for(int i=1;i<=nums.size();i++){
            f=f+sum-(long long) n*nums[n-i];
            maxV=max(maxV,f);
        }
        return maxV;
    }
};