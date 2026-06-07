class MyHashMap {
public:
    unordered_map<int,int> inp;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        inp[key] = value;
        
    }
    
    int get(int key) {
        if(inp.find(key) == inp.end())
        {
            return -1;
        }
        return inp[key];
    }
    
    void remove(int key) {
        inp.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */