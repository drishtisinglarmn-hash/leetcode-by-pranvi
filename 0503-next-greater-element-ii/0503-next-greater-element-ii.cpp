class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();        
        vector<int>st;
        vector<int>ans(n,-1);
        for(int i=2*n-1; i>=0; i--){   
            int j=i%n;      

            while(!st.empty() && st.back()<=nums[j]){
                st.pop_back();
            }

            if(st.empty()){
                ans[j]=-1;
            }else{
                ans[j]=st.back();
            }

            st.push_back(nums[j]);
        }
        return ans;
        
    }
};