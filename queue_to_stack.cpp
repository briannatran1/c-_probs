class MyStack {
private:
    std::queue <int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x); // adds elem to back of queue
        for(int i = 0; i < q.size() - 1; i++) {
            q.push(q.front()); // moves each front elem of queue to the back except added elem
            q.pop(); // removes front elem which is now at the back
        }
    }
    
    int pop() {
        int val = q.front(); 
        q.pop(); // removes top elem
        return val; // returns val of top elem
    }
    
    int top() {
        return q.front(); // returns top elem
    }
    
    bool empty() {
        return q.empty(); // sees if q is empty
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
