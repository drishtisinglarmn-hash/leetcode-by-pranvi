class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long st=*max_element(weights.begin(), weights.end());
        long long end=0;
        for(int weight:weights){
            end+=weight;
        }
        
        while(st<=end){
            long long mid=st+(end-st)/2;
            int count=1;
            long long capacity=0;
            for(int weight:weights){
                if((capacity+weight)<=mid){
                    capacity+=weight;
                }else{
                    capacity=weight;
                    count++;
                }
            }
            if(count<=days){
                end=mid-1;
            }else st=mid+1;

        }

        return st;
    }
};