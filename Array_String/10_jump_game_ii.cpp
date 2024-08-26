class Solution {
public:
    int jump(vector<int>& nums) {
         int end=nums.size()-1;
       int maxReach=0;
       int canReach=0;
       int jump=0;
       for(int i=0;i<end;i++){
        maxReach=max(maxReach,i+nums[i]);
        if(i==canReach){
            canReach=maxReach;
            jump++;
            if(canReach>=end) break;
        }
       }
       return jump;
        
    }
};