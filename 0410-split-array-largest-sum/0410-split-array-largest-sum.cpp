class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int st=*max_element(nums.begin(),nums.end());
        int end=0;
        for(int num:nums){
            end+=num;
        }
        
        while(st<=end){
            int mid=st+(end-st)/2;
        
             int totalSum=0;
             int subarraysCount=1;
            for(int num:nums){
                if(totalSum+num<=mid){
                    totalSum+=num;
                }else{
                    totalSum=num;
                    subarraysCount++;
                }
            }

            if(subarraysCount<=k) end=mid-1;
            else st=mid+1;
    
        }
        return st;

    }
};