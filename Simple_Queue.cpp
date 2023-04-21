class MyQueue {
public:
    int size = 200;
    int arr[200];
    int f=0;
    int r=0;
    bool full(){
        if(r==size)
            return true;
        return false;
    }
    MyQueue() {
        
    }
    
    void push(int x) {
        // if(full())
        //     return;
        arr[r]=x;
        r+=1;        
    }
    bool empty() {
        if(f==r)
            return true;
        return false;        
    }
    
    int pop() {
        // if(empty())
        //     return;
        int t = arr[f];
        f+=1;
        return t;        
    }
    
    int peek() {
        return arr[f];
        
    }
    
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
