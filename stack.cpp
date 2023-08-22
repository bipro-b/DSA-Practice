#include<bits/stdc++.h>
using namespace std;

#define n 100;
class Stack{
    int *arr;
    int top;

    public:
    Stack(){
        arr = new int[5];
        top=-1;
    }

    void push (int x){
        if(top==4){
            cout<<"Stack is overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if(top==-1){
            cout<<"Under flow"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"NO element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};

int main() {
    Stack st;
    st.push(1);
    st.push(3);
    st.push(5);
    st.push(10);
    st.push(100);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty();
    
    return 0;
}