class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i : nums){
            freq[i]++;
        }
        int ans = 0;
        int max_freq = 0;
        for(auto it : freq){
            if (it.second > max_freq){
                max_freq = it.second;
                ans = it.first;
            } 
        }
        return ans;
        
    }
};