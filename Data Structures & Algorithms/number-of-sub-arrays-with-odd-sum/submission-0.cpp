class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        int count = 0;
        int even = 1;
        int odd = 0;
        int prefix = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            prefix += arr[i];
            if(prefix % 2 == 0){
                count+=odd;
                even++;
            }
            else{
                count+=even;
                odd++;
            }
            count %= MOD;
        }
        return count;
        
    }
};