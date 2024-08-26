class Solution {
public:
    vector<int> sorted;
    int hIndex(vector<int>& citations) { 
        countSort(citations);
        int h_index=0;
        for(int i=0;i<citations.size();i++){
            int h=citations.size()-i;
            if(citations[i]>=h) {
                h_index=h;
                break;
            }
        }

        return h_index;


     }

    void countSort(vector<int>& citations) {
        int mx = INT_MIN;
        for (auto u : citations)
            mx = max(mx, u);

        vector<int> freq(mx + 1, 0);
        for (auto u : citations)
            freq[u]++;

        vector<int> sorted;
        for (int i = 0; i <= mx; i++) {
            while (freq[i] > 0) {
                sorted.push_back(i); 
                freq[i]--;
            }
        }

        citations = sorted; 
    }
};

// n^2 solution
// class Solution {
// public:
//     int hIndex(vector<int>& citations) {
//         int n = citations.size();
//         int h_index = 0;
        
//         for (int h = 0; h <= n; h++) {
//             int count = 0;
//             for (int i = 0; i < n; i++) {
//                 if (citations[i] >= h) {
//                     count++;
//                 }
//             }
//             if (count >= h) {
//                 h_index = h;
//             }
//         }
        
//         return h_index;
//     }
// };
