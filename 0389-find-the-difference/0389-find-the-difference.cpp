class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> arr(26,0);
        for(char ch1:s){
            arr[ch1-'a']++;
        }        
        for(char ch2:t){
            arr[ch2-'a']--;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=0) return char ('a'+i);
        }
        return ' ';
    }
};