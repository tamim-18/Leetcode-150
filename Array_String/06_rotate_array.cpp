class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n=nums.size();

        k%=n;
        // 1 2 3 4 5 6 7===> k=3
        // reverse 7 6 5 4 3 2 1
        // reverse till k-1
        // 5 6 7 4 3 2 1
        // reverse from k to end;
        // 5 6 7 1 2 3 4
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};