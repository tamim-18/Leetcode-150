// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         set<vector<int>>st;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int l=nums[i];
//             int m=i+1;
//             int r=n-1;
//             while(m<r){
//                 int sum=l+nums[m]+nums[r];
//                 if(sum==0) {
//                     vector<int>v;
//                     v.push_back(l);
//                     v.push_back(nums[r]);
//                     v.push_back(nums[m]);
//                     st.insert(v);
//                     m++;
//                     r--;
//                 }
//                 else if(sum<0){
//                     m++;
//                 }else {
//                     r--;
//                 }
//             } 
//         }
//         vector<vector<int>>vec;
//         for(auto u:st){
//             vec.push_back(u);
//         }

//         return vec;

        
//     }
// };

//optimized 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Iterate through the array
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1;
            int r = n - 1;

            // Step 3: Use two-pointer technique
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];

                if (sum == 0) {
                    // Found a valid triplet
                    result.push_back({nums[i], nums[l], nums[r]});

                    // Skip duplicate values for the second element
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    // Skip duplicate values for the third element
                    while (l < r && nums[r] == nums[r - 1]) r--;

                    // Move the pointers after processing
                    l++;
                    r--;
                }
                else if (sum < 0) {
                    // Increase the left pointer to get a larger sum
                    l++;
                }
                else {
                    // Decrease the right pointer to get a smaller sum
                    r--;
                }
            }
        }

        return result;
    }
};
