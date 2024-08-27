// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         // bruteforce solution
//         // o(n^2)
//         int n=gas.size();
//         for(int i=0;i<n;i++){
//             if(gas[i]<cost[i]) continue;
//             int j=(i+1)%n;
//             int curGas=gas[i]-cost[i]+gas[j];
//             while(i!=j){
//                 if(curGas<cost[j]) brdeak;
//                 curGas-=cost[j];
//                 j=(j+1)%n;
//                 curGas=curGas+gas[j];

//             }
//             if(i==j) return i;
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int totalIncome=accumulate(begin(gas),end(gas),0);
        int totalCost=accumulate(begin(cost),end(cost),0);
        if(totalIncome<totalCost) return -1;
        int total=0;
        int res=0;
        for(int i=0;i<n;i++){
            total+=gas[i]-cost[i];
            if(total<0){
                total=0;
                res=i+1;
            }
        }
        return res;
    }
};