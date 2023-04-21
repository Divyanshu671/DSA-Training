class MyCircularQueue {
public:
    int *arr;
    int front;
    int rear;
    int size;
    MyCircularQueue(int k) {
        arr = new int[k];
        front = -1;
        rear = -1;
        size = k;
    }
    bool enQueue(int value) {
        if(isFull()) 
            return false;
        rear = (rear + 1) % size;
        arr[rear] = value;

        if(front==-1) 
            front = 0;
        return true;
    }
    bool deQueue() {
        if(isEmpty()) 
            return false;

        if(front == rear) 
            front = rear = -1;
        else
            front = (front + 1) % size;
        return true;
    }
    int Front() {
        if(isEmpty()) 
            return -1;
        return arr[front];
    }
    int Rear() {
        if(isEmpty()) 
            return -1;
        return arr[rear];
    }
    bool isEmpty() {
        if(front == -1)
            return true;
        return false;
    }
    bool isFull() {
        if((rear + 1) % size == front)
            return true;
        return false;
    }
};
