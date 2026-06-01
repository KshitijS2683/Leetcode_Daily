class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int n = q1.size();

        for (int i = 0; i < n - 1; i++) {
            int temp = q1.front();
            q1.pop();
            q2.push(temp);
        }

        int out = q1.front();
        q1.pop();

        swap(q1, q2);

        return out;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
};