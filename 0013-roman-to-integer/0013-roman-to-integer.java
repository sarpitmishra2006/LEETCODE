class Solution {
    public int romanToInt(String s) {
        HashMap<Character,Integer> hash=new HashMap<>();//creating a hashmap and storing all the values
        hash.put('I',1);
        hash.put('V',5);
        hash.put('X',10);
        hash.put('L',50);
        hash.put('C',100);
        hash.put('D',500);
        hash.put('M',1000);
        int a=0;//initial value of answer to 0
        int l=s.length();//l is the length of the string
        for(int i=0;i<l;i++){//traversing
            int b=hash.get(s.charAt(i));
            if(i+1<l && b<hash.get(s.charAt(i+1))){
                a-=b;
            }else{
                a+=b;//b is current value
            }
        }
        return a;//return answer

    }
}