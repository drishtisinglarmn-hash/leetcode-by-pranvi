class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int st=1;
        int end = *max_element(piles.begin(), piles.end());

        while(st<=end){
            long int takenHours=0;
            int mid= st+(end-st)/2;

            for(int i=0;i<piles.size();i++){
                takenHours += (piles[i]+mid-1)/mid;
                }
            
            if(takenHours<=h){
                end=mid-1;
            }else st=mid+1;
        }
        return st;

 
    }
};