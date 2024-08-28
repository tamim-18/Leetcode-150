// class Solution:
//     def twoSum(self, numbers: List[int], target: int) -> List[int]:
//         l,r=0,len(numbers)-1
//         while l<r:
//             s=numbers[l]+numbers[r]
//             if s==target:
//                 return [l+1,r+1]
//             elif s<target:
//                 l=l+1
//             else:
//                 r=r-1
//         return []
        

// c++

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //two pointer method
        int n=numbers.size();
        int l=0,r=n-1;
        vector<int>v;
        while(l<r)
        {
           if(numbers[l]+numbers[r]==target)
           {
              return {l+1,r+1};

           }
           else if(numbers[l]+numbers[r]<target)
           {
               l++;
           }
           else r--;
            
        }
       return {};
       
        
    }
};