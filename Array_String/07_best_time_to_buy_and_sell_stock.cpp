class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mx=0;
        int mn=INT_MAX;
        for(auto u:prices){
            mn=min(mn,u);
            mx=max(mx,u-mn);
        }
        return mx;
    }
};

// o^2 soln
// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
    //     int profit=0;
    //     int size=prices.size()-1;
    //     for(int i=size;i>0;i--)
    // {
    //     for(int j=i-1;j>=0;j--)
    //     {
    //         if(prices[i]-prices[j]>0 && prices[i]-prices[j]>profit)
    //         {
    //             profit=prices[i]-prices[j];        
    //         }
    //     }
    // } 
    // return profit; 
