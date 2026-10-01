class MyHashSet {
public:
    int M;
    int index;
    vector<list<int>> vec;

    int getIdx(int key) {
        return key%M;
    }

    MyHashSet() {
        M = 10000;
        vec.resize(M);
    }
    
    void add(int key) {
        index = getIdx(key);

        auto itr = find(vec[index].begin(), vec[index].end(), key);

        if(itr == vec[index].end()) {
            vec[index].push_back(key);
        }
    }
    
    void remove(int key) {
        index = getIdx(key);

        auto itr = find(vec[index].begin(), vec[index].end(), key);

        if(itr != vec[index].end()) {
            vec[index].erase(itr);
        }
    }
    
    bool contains(int key) {
        index = getIdx(key);

        auto itr = find(vec[index].begin(), vec[index].end(), key);

        return itr != vec[index].end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */