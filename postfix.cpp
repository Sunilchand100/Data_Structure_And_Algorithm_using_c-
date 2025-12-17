#include<iostream>
#include<string>
#include<cmath>
#include<stack>
using namespace std;

int main()
{
    string postfix;
    cout<<"Enter a postfix Expression"<<endl;
    cin>>postfix;

    stack<int> st;

    for(int i=0; i<postfix.length();i++)

    {
        char ch=postfix[i];

        if (isdigit(ch))
        {
            st.push(ch-'0');
        }

        else 
        {
            int op1=st.top();
            st.pop();

            int op2= st.top();
            st.pop();

            int result;

            switch (ch)

            {
                case '+':

            result= op1+op2;
            break;

            case '-':
            result=op2-op1;
            break;

            case '/':

            result=op2/op1;
            break;

            case '^':
            result= pow(op2,op1);
            break;

            case'*':
            result=op1*op2;
            break;



            default:
            cout<<"Invalid choice please try again "<<endl;
            return 0;
            }
            st.push(result);

        }
        

    }
    int finalresult= st.top();
    st.pop();
    cout<<"Result of postfix expression is:"<<finalresult<<endl;
    return 0;
}