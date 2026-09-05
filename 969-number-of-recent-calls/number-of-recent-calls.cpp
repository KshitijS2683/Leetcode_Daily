class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        queue<int> q1;
        q = q1;
    }
    
    int ping(int t) {
        q.push(t);
        while(!q.empty() && q.front() < (t-3000))
        {
            q.pop();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */