class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n=nums.size();
        int i=0;
        int j=n-1;
        int cnt=0;
        while(i<=j){
            if(nums[i]==val && nums[j]!=val){
                swap(nums[i],nums[j]);
                i++;
                j--;
                cnt++;
            }else if(nums[i]==val and nums[j]==val) {
                cnt++;
                j--;
            }
            else {
            i++;
        }
        }
        return n-cnt;
        
    }
};