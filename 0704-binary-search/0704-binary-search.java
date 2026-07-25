class Solution {
    public int search(int[] nums, int target) {
        int s=0;
        int e=nums.length-1;
        while(s+1<e){
            int mid=(s+e)/2;
            if(nums[mid]<target){
                s=mid;
            }else {
                e=mid;
            }
        }
        return (nums[s]==target?s:nums[e]==target?e:-1);
    }
}