class MyHashMap {
private:
    static const int numBuckets=10000;
    vector<list<pair<int,int>>> buckets;
    int hash(int key){
        return key%numBuckets;
    }
public:
    MyHashMap() {
        buckets.resize(numBuckets);
    }
    
    void put(int key, int value) {
        int b=hash(key);
        for(auto &p:buckets[b]){
            if(p.first==key) 
            {p.second=value;
            return;}
        }
        buckets[b].push_back({key,value});
    }
    
    int get(int key) {
        int b=hash(key);
        for(auto &p:buckets[b]){
            if(p.first==key) return p.second;
        }
        return -1;
    }
        
    void remove(int key) {
        int b=hash(key);
        for(auto it=buckets[b].begin(); it!=buckets[b].end(); it++){
            if(it->first==key){
                buckets[b].erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */