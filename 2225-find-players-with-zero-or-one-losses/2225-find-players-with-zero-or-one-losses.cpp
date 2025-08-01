class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        unordered_map<int,int>lost_map; //jitne loosers hai unko hum isme store krenege

        for(int i=0;i<matches.size();i++){
            // loser ka hi kaam hai kyunki hume return no loser krne ya 1 time lost krne
            // To isse hm count rkh skte 
            // jiska 1 count vo lost once me aur jo hai hi nhi map me vo never lost

            int loser=matches[i][1];
            lost_map[loser]++;
        }
        vector<int>lostOnce;
        vector<int>neverLost;
         for(int i=0;i<matches.size();i++){

            int winner=matches[i][0];
            int loose=matches[i][1];

            if(lost_map.find(winner)==lost_map.end()){
                neverLost.push_back(winner);
                lost_map[winner]=2;
            }
            if(lost_map[loose]==1){
                lostOnce.push_back(loose);
            }
         }
        sort(lostOnce.begin(),lostOnce.end());
        sort(neverLost.begin(),neverLost.end());

         return{neverLost,lostOnce};
    
    
    
    
    }
};