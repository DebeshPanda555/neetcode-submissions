class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            // Width is the distance between pointers; height is limited by the shorter line
            int width = right - left;
            int currentHeight = min(height[left], height[right]);
            
            // Update the maximum area found so far
            maxWater = max(maxWater, width * currentHeight);

            // Move the pointer pointing to the shorter line inward
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};
