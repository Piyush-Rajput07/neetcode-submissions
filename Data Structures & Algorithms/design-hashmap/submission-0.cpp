class MyHashMap {
public:
    int M;
    vector<pair<int, int>> vec;

    MyHashMap() {
        int M = 1000001;
        vec.resize(M, {-1, -1});
    }
    
    void put(int key, int value) {
        vec[key] = {key, value};
    }
    
    int get(int key) {
        if(vec[key].first == key) {
            return vec[key].second;
        } else {
            return -1;
        }
    }
    
    void remove(int key) {
        if(vec[key].first == key) {
            vec[key] = {-1, -1};
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