class Solution {
public:

    int gcde(int a,int b){

        if(b==0){
            return a;
        }
        return gcde(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        

        int a=*max_element(nums.begin(),nums.end());
        int b=*min_element(nums.begin(),nums.end());

        return gcd(a,b);
        

    }
};