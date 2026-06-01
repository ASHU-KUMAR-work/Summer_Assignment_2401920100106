class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = 0;
        int min = INT_MAX;
        for(int i:prices){
            if(i<min){
                min = i;
            }
            else{
                mp = max(mp,i-min);
            }
        }
        return mp;
    }
};
