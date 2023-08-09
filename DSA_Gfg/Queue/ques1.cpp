// SIMPLE QUEUE PROGRAMM
#include<bits/stdc++.h>
using namespace std;
class Myqueue
{
    public:
    queue<int>q;
    void display()
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
void Push(int x)
{
    q.push(x);                     // WRONG NEED PROPER IMPLEMENTATION 
}
int Pop()
{
   if (!q.empty()) {
        int x = q.front();
        q.pop();
        return x;
    } else {
        cout << "Queue is empty, cannot pop.\n";
        return -1; 
    }
}
int Front()
{
    return (q.front());
}
int Size()
{
    return (q.size());
}
bool check()
{
    return (q.empty()==true);
}
};
int main()
{
    Myqueue qu;
    cout<<"Enter 0 to exit :\n";
    cout<<"Enter 1 for push() : \n";
    cout<<"Enter 2 for pop() : \n";
    cout<<"Enter 3 for front() : \n";
    cout<<"Enter 4 for size() :\n";
    cout<<"Enter 5 to check whether your queue is empty or not :\n";
    cout<<"Enter 6 to display your queue :\n";
    cout<<"Enter 7 to clear the screen :\n";
    int choice;
    do
    {
        cout<<"Enter the choice :\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                int x;
                cout<<"Enter the element to be pushed :\n";
                cin>>x;
                qu.Push(x);
                break;
            }
            case 2:
            {
                cout<<"Poped element is : "<<qu.Pop()<<endl;
                break;
            }
            case 3:
            {
                cout<<"Front element is : "<<qu.Front()<<endl;
                break;
            }
            case 4:
            {
                cout<<" Your queue size is : "<<qu.Size()<<endl;
                break;
            }
            case 5:
            {
                if(qu.check()==false)
                {
                    cout<<"Your Queue is not empty  : \n";
                    qu.display();
                }
                else{
                    cout<<"Your Queue is empty :\n";
                }
                break;
            }
            case 6:
            {
                cout<<"Dispalying your Queue :\n";
                qu.display();
                break;
            }
            case 7:
            {
                system("cls");
                break;
            }
            default :
            {
                cout<<"Invalis choice :\n";  
                break;
            }
        }
    } while (choice!=0);
    
return 0;
}