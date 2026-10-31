# include <iostream>
using namespace std;
class node 
{
    public:
    int data;
    node*next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
class stack
{
    private:
    node*top;
    public:
    stack()
    {
        top=NULL;
    }
    int empty()
    {
        if(top==NULL)
        return(1);
        else
        return(0);
    }
    void push(int x)
    {
        node*p=new node(x);
        p->next=top;
        top=p;
    }
    int pop()
    {
        int x=top->data;
        node*p=top;
        top=top->next;
        delete p;
        return(x);
    }
    void display()
    {
        node*q=top;
        while(q!=NULL)
        {
            cout<<endl<<q->data;
            q=q->next;
        }
    }
    int peek()
    {
        return(top->data);
    }
};
int main()
{
    stack s;
    int x;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    x=s.peek();
    cout<<"top element is"<<x<<endl;
    x=s.pop();
    cout<<"removed element"<<x<<endl;
    s.display();

    s.pop();
    s.pop();
    s.pop();

    return 0;

}
 > cd "d:\pratiksha\" ; if ($?) { g++ stackusing_linkedlist.cpp -o stackusing_linkedlist } ; if ($?) { .\stackusing_linkedlist }

30
20
10top element is30
removed element30

20
10
