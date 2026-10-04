class MyHashSet {
private:
    static const int numBuckets=10000;
    vector<list<int>> buckets;
    int hash(int key){
        return key%numBuckets;
    }
public:
    MyHashSet() {
        buckets.resize(numBuckets);
    }
    
    void add(int key) {
        int b=hash(key);
        for(auto val:buckets[b]){
            if (val==key) return;
        }
        buckets[b].push_back(key);
    }
    
    void remove(int key) {
        int b=hash(key);
        buckets[b].remove(key);
    }
    
    bool contains(int key) {
        int b=hash(key);
        for(auto val:buckets[b]){
            if(val==key) return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */