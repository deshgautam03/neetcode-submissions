class MyHashSet {
private:
    static const int numBuckets = 1000;
    vector<list<int>> buckets;

    int hash(int key) {
        return key % numBuckets;
    }

public:
    MyHashSet() {
        buckets.resize(numBuckets);
    }

    void add(int key) {
        int b = hash(key);
        for (int val : buckets[b]) {
            if (val == key) return;   // already present, do nothing
        }
        buckets[b].push_back(key);
    }

    void remove(int key) {
        int b = hash(key);
        buckets[b].remove(key);   // list::remove erases all matching values
    }

    bool contains(int key) {
        int b = hash(key);
        for (int val : buckets[b]) {
            if (val == key) return true;
        }
        return false;
    }
};