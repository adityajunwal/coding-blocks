#include <iostream>
using namespace std;

#define MAX 100


// 0 1 2 3 4 5 6 7 8 9
//                f  e


class Stack{
    private:
    int stack[MAX];
    int top = -1;

    public:
    int peek(){
        return this->stack[this->top];
    }

    void push(int num){
        if (this->top == 100){
            cout << "Cannot Push " << num << ", Stack Overflow" << endl;
            
        } else {
            this->stack[++top] = num;
        }
    }

    bool isEmpty() {
        return this->top == -1;
    }

    int pop() {
        if (this->isEmpty()){
            cout << "Cannot Pop, Stack Underflow!" << endl;
        } else {
            return this->stack[this->top--];
        }
    }

    void print() {
        cout << "Stack: ";
        for (int i=0; i<=this->top; i++){
            cout << this->stack[i] << " ";
        } cout << endl;
    }

};

int main() {
    Stack st1 = Stack();
    st1.push(5);
    st1.push(6);
    st1.push(7);

    st1.print();

    cout << st1.pop() << endl;
    cout << st1.pop() << endl;

    st1.print();

}