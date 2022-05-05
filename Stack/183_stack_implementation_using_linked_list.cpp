#include<iostream>
using namespace std;

class Node
{   
    public:
    int data;
    Node* next;

    //constructor
    Node(int data)
    {
        this -> data= data;
        this -> next= NULL;

    }

    //Destructor
    ~Node()
    {
        int value=this->data;
        while(this->next!=NULL)
        {
            this->next=NULL;
            delete next;
        }    
        cout<<" Memory deleted with the value as "<<value<<endl;
    }
};

class Stack
{
    public:

    int size;
    Node* head;

    Stack()
    {
        head=NULL;
        size=0;

    }

    void push(int data)
    {
        Node* temp= new Node(data);
        temp->data= data;
        temp->next= head;
        head=temp;
    }

    void pop()
    {
        if(head==NULL)
            cout<<" Stack is empty "<<endl;
        else
            {
                Node* temp=head;
                head=head->next;
                delete temp;
            }
    }

    int peak()
    {
        if(head!=NULL)
        {
            int value= head->data;
            return value;
        }
        else
            return -1;
        
    }
};

int main()
{
    Stack st;
    st.push(5);
    cout<< " Stack top is "<<st.peak()<<endl;
    st.push(6);
    st.pop();
    st.pop();
    st.pop();
    cout<< " Stack top is "<<st.peak()<<endl;
    st.push(7);
    cout<< " Stack top is "<<st.peak()<<endl;
    st.push(8);
    cout<< " Stack top is "<<st.peak()<<endl;
    st.push(9);
    cout<< " Stack top is "<<st.peak()<<endl;
    st.push(10);
    cout<< " Stack top is "<<st.peak()<<endl;

    return 0;
}
