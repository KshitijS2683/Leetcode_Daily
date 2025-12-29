class ProductOfNumbers {
public:
    vector<int> arr;
    
    void add(int num) {
        arr.push_back(num);
        
    }
    
    int getProduct(int k) {
        int a = arr.size()-1;
        int out = 1;
        while(k>0 && a>=0)
        {
            out *= arr[a];
            a--;
            k--;
        }
        return out;

        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */