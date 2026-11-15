class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int i : nums){
            freq[i]++;
        }
        vector<int> uniqueElements;
        for(auto p : freq) {
            uniqueElements.push_back(p.first);
        }

        sort(uniqueElements.begin(), uniqueElements.end(), [&](int a, int b) {
            return freq[a] > freq[b];
        });
        
        vector<int> ans;

        for(int i = 0; i < k; i++) {
            ans.push_back(uniqueElements[i]);
        }

        return ans;
    }
};
