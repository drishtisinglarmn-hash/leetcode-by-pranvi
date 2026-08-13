class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>op;
        int sum=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int n=op.size();
                sum+= op[n-1]+op[n-2];
                op.push_back(op[n-1]+op[n-2]);
            }
            else if(operations[i]=="C"){
                sum-=op.back();
                op.pop_back();
            }
            else if(operations[i]=="D"){
                int val = 2 * op.back();
                op.push_back(val);
                sum += val;
            }else{
                int val = stoi(operations[i]);
                op.push_back(val);
                sum+=val;
            }

        }
        return sum;
    }
};