class Solution {
public:
    string largestOddNumber(string nums) {

        int n=nums.size();

        for(int i =n;i>=0;i--){
            if((nums[i]-'0')%2!=0){
                return nums.substr(0,i+1);
            }
        }
        return "";
        
    }
};