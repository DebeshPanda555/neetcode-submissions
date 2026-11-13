class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        int sum = 0;
        vector<int>ans;
        for(int i = 0 ; i < n ; i++){
            if(operations[i]=="+"){
                ans.push_back(ans[ans.size()-1] + ans[ans.size()-2]);
            }
            else if(operations[i]=="C"){
                ans.pop_back();
            }
            else if(operations[i]=="D"){
                ans.push_back(ans.back() * 2);
            }
            else{
                ans.push_back(stoi(operations[i]));
            }
        }
        for(int i = 0 ; i < ans.size() ; i++){
            sum += ans[i];
        }
        return sum;


        
    }
};