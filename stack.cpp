#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top=-1;

void push()
{
     int n;
     if(top==(N-1))
     {
         cout<<"Overflow condition"<<endl;
     }
     else
     {
         cout<<"Enter the value"<<endl;
         cin>>n;
         stack[++top]=n;
     }
}
void pop()
{
  if(top==-1)
  {
      cout<<"Underflow"<<endl;
  }
  else
  {
      cout<<"The data removed is "<<stack[top--]<<endl;
  }
}
void peek()
{
    if(top==-1)
    {
        cout<<"No data is available"<<endl;
    }
    else
    {
        cout<<"The top most element is "<<stack[top]<<endl;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"No data is available"<<endl;
    }
    else
    for(int i=top;i>-1;i--)
    {
        cout<<stack[i]<<endl;
    }
}
int main()
{
    int choice;
    while(choice!=5)
    {
        cout<<"Press 1 for entering a value"<<endl;
        cout<<"Press 2 for deleting a value"<<endl;
        cout<<"Press 3 for checking the value at the top"<<endl;
        cout<<"Press 4 for displaying all the elements"<<endl;
        cout<<"Press 5 for exit"<<endl;
        cin>>choice;
        switch (choice)
        {
      case 1:
          push();
          break;
      case 2:
          pop();
          break;
      case 3:
          peek();
          break;
      case 4:
          display();
          break;
      case 5:
          cout<<"Exit"<<endl;
          break;
        }
    }
}
