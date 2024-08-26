class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 2) return nums.size(); // If there are 2 or fewer elements, return the size directly
        
        int i = 2; // Start from the third element in the array
        
        for (int j = 2; j < nums.size(); j++) {
            // If the current element is different from the element at i-2, copy it to the i-th position
            if (nums[j] != nums[i - 2]) {
                nums[i] = nums[j];
                i++;
            }
        }
        
        return i; // i is the length of the array with duplicates removed
    }
};
