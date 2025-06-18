#include <iostream>
#include<string>
#include <vector>
#include<limits>
#include<queue>


using namespace std;

class MyStack{
private:
    int *arr;
    int top;
    int capacity;

public:
    MyStack(int size){
        capacity = size;
        arr = new int[capacity];
        top = -1;

    }

    ~MyStack(){
        delete[] arr;
        
        
    }

    bool isFull(){
        return top == capacity - 1;
        
    }

    bool isEmpty(){
        return  top == -1;
    }
    int size(){
        return top + 1;
    }

    void push(int data ){
        if(isFull()){
            cout << "OverFlow";
            return;
        }
        top++;
        arr[top] = data;
   
    }

    int pop(){
        if(isEmpty()){
            cout << "underflow";
            return -1;
        }
        int popped_data = arr[top];
        top--;
        return popped_data;
    }
    
    int  peak(){
        if(isEmpty()){

            return -1;
        }
        return arr[top];
    }
};

int main() {
    
    MyStack myStack(10);
    myStack.push(10);
    myStack.push(20);
    myStack.pop();
    cout << myStack.peak();
    int a;
    cin >> a;
    return 0;
}
