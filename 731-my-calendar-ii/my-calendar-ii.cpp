class MyCalendarTwo {
public:
    map<int,int> arr;
    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
        arr[startTime]++;
        arr[endTime]--;
        // sort(arr.begin(),arr.end());
        int cur = 0;
        for(auto &x : arr)
        {
            cur += x.second;
            if(cur>2)
            {
                arr[startTime]--;
                arr[endTime]++;
                return false;
            }
        }
        return true;
        
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */