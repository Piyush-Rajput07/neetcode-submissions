class MyHashMap {
public:
    int M;
    vector<list<pair<int, int>>> vec;

    MyHashMap() {
        M = 10000;
        vec.resize(M);
    }
    
    void put(int key, int value) {
        int bucket_no = key%M;

        auto &chain = vec[bucket_no];

        for(auto &it : chain) {

            if(it.first == key) {
                it.second = value;
                return;
            }
        }

        chain.emplace_back(key, value);
    }
    
    int get(int key) {
        int bucket_no = key%M;

        auto &chain = vec[bucket_no];

        for(auto &it : chain) {

            if(it.first == key) {
                return it.second;
            }
        }

        return -1;
    }
    
    void remove(int key) {
        int bucket_no = key%M;

        auto &chain = vec[bucket_no];

        for(auto it = chain.begin(); it != chain.end(); it++) {
            
            if(it->first == key) {
                chain.erase(it);
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