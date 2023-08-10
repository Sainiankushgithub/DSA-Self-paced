// QUEUE IMPLEMENTATION 
#include<bits/stdc++.h>
using namespace std;
struct Queue
{
    int size;
    int cap;
    int *arr;
    Queue(int c)
    {
        cap=c;
        size=0;
        arr=new int [cap];
    }
    int Size()
    {
        return size;
    }
    bool isFull()
    {
        return (size==cap);
    }
    bool isEmpty()
    {
        return (size==0);
    }
    void Enqueue(int x)
    {
        if(isFull())
        {
            cout<<"Queue is full cannot insert more item :\n";
            return ;
        }
        arr[size]=x;
        size++;
    }
    void Dequeue()
    {
        if(isEmpty())
        {
            cout<<"Your Queue is empty cannot dequeue item from it :\n";
            return;
        }
        for(int i=0;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    int Front()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        return arr[0];
    }
    int Rear()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        return arr[size-1];
    }
};
int main()
{
    int cap;
    cout<<"Enter the capcity of your Queue :\n";
    cin>>cap;
    Queue qu( cap);
    cout<<"Enter 0 to exit :\n";
    cout<<"Enter 1 for Enqueue() : \n";
    cout<<"Enter 2 for Dequeue() : \n";
    cout<<"Enter 3 for front() : \n";
    cout<<"Enter 4 for Rear() : \n";
    cout<<"Enter 5 for size() :\n";
    cout<<"Enter 6 to check whether your queue is empty or not :\n";
    cout<<"Enter 7 to display your queue :\n";
    cout<<"Enter 8 to clear the screen :\n";
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
                qu.Enqueue(x);
                break;
            }
            case 2:
            {
                qu.Dequeue();
                cout<<"After Dequeue :\n";
                qu.display();
                break;
            }
            case 3:
            {
                cout<<"Front element is : "<<qu.Front()<<endl;
                break;
            }
            case 4:
            {
                cout<<"Rear item is : "<<qu.Rear()<<endl;
                break;
            }
            case 5:
            {
                cout<<" Your queue size is : "<<qu.Size()<<endl;
                break;
            }
            case 6:
            {
                if(qu.isEmpty())
                {
                    cout<<"Your Queue is  empty  : \n";
                }
                else{
                    cout<<"Your Queue is not  empty :\n";
                }
                break;
            }
            case 7:
            {
                cout<<"Dispalying your Queue :\n";
                qu.display();
                break;
            }
            case 8:
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