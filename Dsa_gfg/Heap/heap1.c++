#include <bits/stdc++.h>
using namespace std;
#define maxEle 100
class Heap
{
public:
    int arr[maxEle];
    int size;
    Heap()
    {
        arr[0] = -1;
        size = 0;
    }

    // INSERSTION IN A HEAP 
    void insertion(int val)
    {
        size++;
        arr[size] = val;
        int index = size;
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    // DELETION IN A HEAP 
    void deleteHeapEle()
    {
        if(size==0)
        {
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(1)
        {
            int left=2*i;
            int right=2*i+1;
            if(arr[i]<arr[left])
            {
                swap(arr[i],arr[left]);
                i=left;
            }
            else if(arr[i]<arr[right])
            {
                swap(arr[i],arr[right]);
                i=right;
            }
            else{
                return;
            }
        }
    }
    void print()
    {
        for (int i=1;i<=size;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }



};
int main()
{
    Heap h;
    int n;
    cout<<"Enter the total number of element you want to insert\n";
    cin>>n;
    cout<<"Enter the elements which you want to insert\n";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        h.insertion(x);
    }
    cout<<"Displaying your Heap elements\n";
    h.print();
    cout<<"Deleting the root\n";
    h.deleteHeapEle();
    cout<<"After deleting the element\n";
    h.print();
    return 0;
}