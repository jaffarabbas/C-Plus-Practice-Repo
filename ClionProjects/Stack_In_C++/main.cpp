#include <iostream>
using namespace std;

#define max 1000

class Stack{
public:
    int arr[max];
    int top;
    Stack(){top = -1;}
    bool push(int x);
    int pop();
    int peek();
    void print();
    bool isEmpty();
    bool isFull();
};

bool Stack::push(int x) {
    if(top >= max){
        cout << "Stack OverFlow" << endl;
        return false;
    }else{
        arr[++top] = x;
        return true;
    }
}

int Stack::pop() {
   if(top<0){
       cout << "Stack UnderFLow" << endl;
       return 0;
   }
   else{
       cout << "Old Top : " << top << endl;
       int x = arr[top--];
       cout << "Value : " << x << " New Top : " << top << endl;
       return x;
   }
}

int Stack::peek() {
    if(top<0){
        cout << "Stack UnderFLow" << endl;
        return 0;
    }
    else{
        int x = arr[top];
        return x;
    }
}

void Stack::print(){
    if(top < 0){
        cout << "\t\t\tStack UnderFlow" << endl;
    }else {
        if(top == 0){
            cout << "[";
            for (int i = 0; i <= top; i++) {
                cout << arr[i];cout << " " ;
            }
            cout << " ]\n" << endl;
        }else {
            cout << "[";
            for (int i = 0; i <= top; i++) {
                cout << arr[i];cout << " " ;
            }
            cout << "]\n" << endl;
        }
    }
}

bool Stack::isEmpty() {
    return (top<0);
}

bool Stack::isFull() {
    return (top>1000);
}

void test(){
    class Stack stack;
    int i,size,number;
    char operater;
    while(true){
        cout <<"Your Operation : \n1)Push ->p\n2)Pop -> o\n3)Peek ->c\n4)Print stack -> s\n5)IsEmpty -> e\n6)End -> x"<< endl;
        cout <<"Enter Operater : "<< endl;
        cin >> operater;
        switch (operater){
            case 'p':
                cout <<"\t\t\tEnter Number to Push"<< endl;
                cin >> number;
                stack.push(number);
                break;
            case 'o':
                stack.pop();
                break;
            case 'e':
                cout <<stack.peek()<< endl;
                break;
            case 's':
                stack.print();
                break;
            default:
                cout <<"\t\t\tEnter Valid Operater"<< endl;
                break;
        }
        if(operater == 'x'){
            break;
        }
    }
}

int main() {
    test();
    return 0;
}

