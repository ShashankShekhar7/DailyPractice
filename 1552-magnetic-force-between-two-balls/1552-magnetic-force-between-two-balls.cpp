class Solution {
public:
    bool isPossible(int force,vector<int>& position, int m){
        int prev=position[0];
        int count=1;
        for(int i=1;i<position.size();i++){
            int curr=position[i];
            if(curr-prev>=force){
                count++;
                prev=curr;
            }
            if(count==m)
                break;
        }
        return count==m;
    }
    int maxDistance(vector<int>& position, int m) {
        int n=position.size();
        sort(position.begin(),position.end());
        int low=1;
        int high=position[n-1]-position[0];
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(mid,position,m)){
                ans=mid;
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
        return ans;
        
    }
};