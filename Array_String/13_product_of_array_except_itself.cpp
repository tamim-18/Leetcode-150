// Bruteforce solution
// time complexity: O(n^2)
// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> res(n, 1);

//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (i != j) {
//                     res[i] *= nums[j];
//                 }
//             }
//         }

//         return res;
//     }
// };


// optimized approach
// time complexity: o(n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int prefix=1;
        int suffix=1;
        int n=nums.size();
        vector<int>res(n,1);
        for(int i=0;i<n;i++){
            res[i]=prefix;
            prefix*=nums[i];

        }
        for(int i=n-1;i>=0;i--){
            res[i]*=suffix;
            suffix*=nums[i];
        }
        return res;
    }
};