class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>mergeSorted;
        int i=0;
        int j=0;
        // two pointer
        while(i<m and j<n){
            if(nums1[i]<nums2[j]){
                 mergeSorted.push_back(nums1[i]);
                 i++;
            }else{
                mergeSorted.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            mergeSorted.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            mergeSorted.push_back(nums2[j]);
            j++;
        }
        nums1.clear();
        nums1=mergeSorted;
    }
};