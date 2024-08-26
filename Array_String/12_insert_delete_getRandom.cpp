class RandomizedSet {
public:
    vector<int>v;
    unordered_map<int,int>mp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()) return false;
        v.push_back(val);
        mp[val]=v.size()-1; // val idx map
        return true;
        
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end()) return false;
        int idx=mp[val];
        int lastElement=v.back();
        // update the map
        mp[lastElement]=idx;
        mp.erase(val);
        //update the vector
        swap(v[idx],v[v.size()-1]);
        v.pop_back();
        return true;
    }
    
    int getRandom() {
        int rand=random()%v.size(); // 0,....n-1;
        return v[rand];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */