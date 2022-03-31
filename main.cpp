#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *link;
};

Node *top = NULL;

#define MAX 3
class Stack{
public:
    int sizer;
    bool isempty()
    {
        if(top == NULL)
            return true;
        else
            return false;
    }
    Node *top;
    int a[MAX];
    void topOF(){
        if(Stack::top==NULL){
            cout << "the stack is empty" << endl;
        }
        else{
            cout << "the top is" <<top->data << endl;}


    }
    int pop() {
        if ( isempty() )
            cout<<"Empty";
        else
        {
            Node *ptr = top;
            top = top -> link;
        }
    }
    void size() {
        cout << "the size is"<< sizer << endl;
    }

    Stack() { top =NULL;}

    bool push(int value)
    {
        Node *ptr = new Node();
        ptr->data = value;
        ptr->link = top;
        top = ptr;
    }
};






int main() {
    Stack myStack = *new Stack;
    myStack.push(3);
    myStack.topOF();


    return 0;
}