class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n=position.size()-1;
        long long st=1;
        sort(position.begin(),position.end());
        long long end=position[n]-position[0];

        while(st<=end){
            long long mid=st+(end-st)/2;

            int ballsPlaced=1;
            int lastPos=position[0];
            for(int i=1;i<=n;i++){
                if((position[i]-lastPos)>=mid){
                    ballsPlaced++;
                    lastPos=position[i];
                }
            }

            if(ballsPlaced>=m){
                st=mid+1;
            }else{
                end=mid-1;
            }

        }
        return end;
        
    }
};