class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,bool>m;
        m[n]=1;
        while(1){
            int sum=0;
            while(n){
                int rem=n%10;
                sum+=rem*rem;
                n/=10;
            }
            if(sum==1) return true;
            if(m[sum]) return false;
            n=sum;
            m[n]=true;

        }
        
    }
};