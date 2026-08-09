class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {

        long long required=1LL*m*k;
        if(required>bloomDay.size()){
            return -1;
        }

        long long st=*min_element(bloomDay.begin(),bloomDay.end());
        long long end=*max_element(bloomDay.begin(),bloomDay.end());

        while(st<=end){
            long long mid=st+(end-st)/2;

            int consecutiveDay=0;
            int bouquet=0;
            for(int day:bloomDay){
                if(day<=mid ){
                    consecutiveDay++;

                    if(consecutiveDay==k){
                        bouquet++;
                        consecutiveDay=0;
                    }
                }else consecutiveDay=0;
            }

            if(bouquet>=m){
                end=mid-1;
            }else{
                st=mid+1;
            }

        }
        return st;
        
    }
};