class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele=0;
        int su=0;

        for(int num:nums){
            ele+=num;
            while(num > 0){
                su+=num%10;
                num/=10;
            }
            num=su;
        }
        return abs(ele-su);
    }
};