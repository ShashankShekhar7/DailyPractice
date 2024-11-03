class Solution {
public:
    int beautySum(string s) {
        int beau=0;
        int n=s.size();

        for(int i=0;i<n;i++){

            unordered_map<char ,int>mpp;

            for(int j=i;j<n;j++){
                mpp[s[j]]++;

                int mini=INT_MAX;
                int maxi=-1;

                for(auto k:mpp){
                    mini=min(mini,k.second);
                    maxi=max(maxi,k.second);
                }
                beau=beau+(maxi-mini);
            }
        }
        return beau;
    }
    
};