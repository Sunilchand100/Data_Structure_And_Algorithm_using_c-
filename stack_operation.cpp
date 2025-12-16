#include<iostream>
using namespace std
class stack
{
    private:
    int top;
    int size;
    int arr[100];
    public:
    stack(int s)
    {
        size=5;
        top=-1;

    }
    void push(int items)
    {
        if(top==size-1)           
        {
            cout<<"stack overflow";
        }
        else
        {
            top++;   
            arr[top]=items;
            cout<<items<<"is pushed into stack";
        }
    }
    void pop()   
    {
        if(top==-1)
        {
            cout<<"stack under flow";
        }
        else
        {
            cout<<arr[top]"is pushed from stack"<<endl;
            top--;
        }
    }   
    void peek()
    {
        if(top==-1)
        {
            cout<<"stack under flow";
        }
        else
        {
            cout<<arr[top]"is the topmost value present in the stack"<<endl;
        }
        void display()
        {
            if(top==-1)
            {
                cout<<"stack under flow"<<end;
                
            }
            else
            {
                cout<<"the element present in the stack ";
            }
        }


}

void summation()
{
    if(top==-1)
    {
        cout<<"stack under flow";

    }
    else
    {
        int sum=0;
        for(int i=top;i>=0;i++)
        {
            sum=sum+arr[i];
        }
        cout<<sum<<"is the total summation of the stack"<<endl;
    }
}
void even_odd()
{
    if (top==-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else{
        for(int i=top;i>=0;i--)
        {
            if(arr[i]%2==0)
            {
                cout<<arr[i]<<"is even";
            }
            else
            {
                cout<<arr[i]<<"is odd";
            }
        }
    }
}
void factorial(int number)
{
    long long fact=1;

    for(int i=1;i<=number;i++)
    {
        fact=fact*i;
    }
    cout<<fact;
}
void fact_of_satck()
{
    if(top==-1)
{
    {
        cout<<"stack is emplty";
    }
    else{
        for(int i=top;i>=0;i--)
        {
            cout<<"factorial of  number"<<arr[i]<<"is"<<factorial(arr[i]<<endl);
        }
    }
}
};
int main()
{
    int size;
    cout<<"enter the size of the stack";
    cin>>s(size);
    int choice,items;
    while(true)
    {
        
    }
}