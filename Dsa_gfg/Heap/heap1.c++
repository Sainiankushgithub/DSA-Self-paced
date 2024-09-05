// 1. INSERTION IN HEAP 
// 2. DELETION IN HEAP
// 3. HEAPIFY
// 4. BUILD MAX HEAP
// 5. HEAP SORT()


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

    // IN COMPLETE BINARY TREE LEAF NODE LIES FROM (N/2 +1) 
    // E.G arr=[54,53,55,52,50] leaf nodes are : 55, 52, 50

    // HEAPIFY ALGORITHM
    void Heapify(int arr[],int n,int i)
    {
        int largest=i;
        int left=2*i;
        int right=2*i+1;
        
        if(left<n && arr[largest]<arr[left])
        {
            largest=left;
        }
        if(right<n && arr[largest]<arr[right])
        {
            largest=right;
        }

        if(largest!=i)
        {
            swap(arr[i],arr[largest]);
            Heapify(arr,n,largest);
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

    int arr[6]={-1,54,55,53,52,50};
    int n1=5;
    for(int i=n1/2;i>=1;i--)
    {
        h.Heapify(arr,n1,i);
    }
    cout<<"Displaying the heapify content\n";
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}