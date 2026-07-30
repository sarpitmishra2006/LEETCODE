class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
        int count=0;
        while(num>0){
            count+=num%10;
            num/=10;
        }
        num=count;
        }
        return num;
    }
};