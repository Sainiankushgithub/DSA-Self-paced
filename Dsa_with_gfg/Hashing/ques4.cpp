// HASH TABLE
#include<bits/stdc++.h>
using namespace std;
struct Hashtable
{
    int Bucket;
    list<int>*table;
    Hashtable(int b)
    {
        Bucket=b;
        table=new list<int>[b];
    }
    void insert(int key)
    {
        int i=key%Bucket;
        table[i].push_back(key);
    }
    bool search(int key)
    {
        int i=key%Bucket;
        for(auto x:table[i])
        {
            if(x==key)
            {
                return true;
            }
        }
        return false;
    }
    void remove(int key)
    {
        int i=key%Bucket;
        table[i].remove(key);
    }
    void display()
    {
        for(int i=0;i<Bucket;i++)
        {
            cout<<"Bucket : "<<i<<" ";
            for(auto x:table[i])
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    Hashtable ht(10);
    int n;
    cout<<"Enter the number of element you want to store\n";
    cin>>n;
    cout<<"Enter your elements: \n";
    for(int i=0;i<n;i++)
    {
        int element;
        cin>>element;
        ht.insert(element);
    }
    int choice;
    cout<<"Press 1 for display your hastable :\n";
    cout<<"Press 2 for remove key\n";
    cout<<"Press 3 for search key\n";
    cout<<"Press 4 for clear screen\n";
    cout<<"Press 0 for exit\n";
    do
    {
        cout<<"Enter the chocice\n";
        cin>>choice;
        switch(choice)
        {
            case 0:
            {
                break;
            }
            case 1:
            {
                cout<<"Displaying your hastable elements\n";
                ht.display();
                break;
            }
            case 2:
            {
                int key;
                cout<<"Enter the key to be remove\n";
                cin>>key;
                ht.remove(key);
                break;
            }
            case 3:
            {
                int key;
                cout<<"Enter the key which you wanted to search\n";
                cin>>key;
                if(ht.search(key))
                {
                    cout<<"Key found : "<<key<<endl;
                }
                else 
                {
                    cout<<"Key not found : "<<key<<endl;
                }
                break;
            }
            case 4:
            {
                system("cls");
                break;
            }
            default:
            {
            cout<<"Invalid entry\n";
            break;
            }
        }
    }while(choice!=0);
return 0;
}