class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // booyer  moore voting algorithm
       int major=nums[0];
       int i=1;
       int n=nums.size();
       int cnt=1;
       for(int i=1;i<n;i++){
        if(cnt==0){
            major=nums[i];
            cnt++;
        }else if(nums[i]==major){
            cnt++;
        }else{
            cnt--;
        }
       }
       return major;
        
    }
};

// another process

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int sz=nums.size();
//         sort(nums.begin(),nums.end());
//         int mx=INT_MIN;
//         int maj=0;
//         int cnt=1;
//         for(int i=0;i<sz-1;i++)
//         {
//             if(nums[i]!=nums[i+1]) {
//                 if(mx<cnt)
//                 {
//                     mx=cnt;
//                     maj=nums[i];
//                     cnt=1;
//                 }
//             }
//               else cnt++;

//         }
//          cout<<cnt<<endl;
//           if(mx<cnt)
//                 {
//                     mx=cnt;
//                     maj=nums[sz-1];
//                     cnt=1;
//                 }
//             return maj;

        
//     }
// };
