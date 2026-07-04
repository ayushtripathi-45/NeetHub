class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); ++i) {
            indexedNums.push_back({nums[i], i});
        }

        sort(indexedNums.begin(), indexedNums.end());

        int left = 0;
        int right = indexedNums.size() - 1;

        while (left < right) {
            int currentSum = indexedNums[left].first + indexedNums[right].first;

            if (currentSum == target) {
                
                int index1 = indexedNums[left].second;
                int index2 = indexedNums[right].second;
                
                if (index1 > index2) swap(index1, index2);
                return {index1, index2};
            } 
            else if (currentSum < target) {
                
                left++;
            } 
            else {
                
                right--;
            }
        }

        return {}; 
    }
};
