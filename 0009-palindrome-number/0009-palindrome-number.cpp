class Solution {
public:
    bool isPalindrome(int x) {
        int ori=x;
        int n;
        long long int s=0;
        while(x>0){
            n=x%10;
            s=(s*10)+n;
            x/=10;
        }
        if(ori==s){
            return true;
        }else{
            return false;
        }
        
    }
};