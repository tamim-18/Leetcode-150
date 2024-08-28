class Solution {
public:
    int maxArea(vector<int>& a) {
        int l=0;
        int r=a.size()-1;
        int area=0;
        while(l<=r){
            if(a[l]<=a[r]){
                int ar=a[l]*(r-l);
                area=max(ar,area);
                l++;
            }
            else {
                int ar=a[r]*(r-l);
                area=max(ar,area);
                r--;
            }
        }
        return area;


        
    }
};
// python code
class Solution:
    def maxArea(self, height: List[int]) -> int:
        area=0
        l,r=0,len(height)-1;
        while l<r:
            if height[l]<height[r]:
                ar=(r-l)*height[l]
                area=max(ar,area)
                l=l+1
            else:
                ar=(r-l)*height[r]
                area=max(ar,area)
                r=r-1
        return area
        