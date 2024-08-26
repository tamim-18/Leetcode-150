// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         int id=nums.size()-1;
//         for(int i=nums.size()-1;i>=0;i--){
//             if(nums[i]+i>=id) id=i;
//         }

//         return id==0;
//     }
// };


 // another method as like as jump game ii
class Solution {
public:
    bool canJump(vector<int>& nums) {
       int end=nums.size()-1;
       int maxReach=0;
       int canReach=0;
       for(int i=0;i<=end;i++){
        maxReach=max(maxReach,i+nums[i]);
        if(i==canReach){
            canReach=maxReach;
            if(canReach>=end) return true;
        }
       }

       return false;
    }
};





// recursive soln
// class Solution {
// public:
//     bool canJump(vector<int>& nums) {
//         return canJumpFromPosition(0, nums);
//     }
    
//     bool canJumpFromPosition(int position, vector<int>& nums) {
//         if (position == nums.size() - 1) {
//             return true; // Reached the last index
//         }

//         int furthestJump = min(position + nums[position], (int)nums.size() - 1);
//         for (int nextPosition = position + 1; nextPosition <= furthestJump; nextPosition++) {
//             if (canJumpFromPosition(nextPosition, nums)) {
//                 return true;
//             }
//         }

//         return false;
//     }
// };


// memorization technique

// class Solution {
// public:
//     enum Index {
//         GOOD, BAD, UNKNOWN
//     };

//     bool canJump(vector<int>& nums) {
//         vector<Index> memo(nums.size(), UNKNOWN);
//         memo[memo.size() - 1] = GOOD; // Last position is always GOOD

//         return canJumpFromPosition(0, nums, memo);
//     }
    
//     bool canJumpFromPosition(int position, vector<int>& nums, vector<Index>& memo) {
//         if (memo[position] != UNKNOWN) {
//             return memo[position] == GOOD;
//         }

//         int furthestJump = min(position + nums[position], (int)nums.size() - 1);
//         for (int nextPosition = position + 1; nextPosition <= furthestJump; nextPosition++) {
//             if (canJumpFromPosition(nextPosition, nums, memo)) {
//                 memo[position] = GOOD;
//                 return true;
//             }
//         }

//         memo[position] = BAD;
//         return false;
//     }
// };
