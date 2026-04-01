class MinStack {
public:
    stack<int> st1;
    stack<int> min;


    MinStack() {
        min.push(INT_MAX);
    }
    
    void push(int val) {
        st1.push(val);
        min.push(val < min.top() ? val : min.top());
    }
    
    void pop() {
        st1.pop();
        min.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return min.top();
    }
};
