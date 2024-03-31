
// HEAP INTRODUCTION 
// MIN HEAP IMPLEMENTATION 

#include<bits/stdc++.h>
using namespace std;
struct MinHeap
{
    int *arr;
    int capacity;
    int size;
    MinHeap(int c)
    {
        capacity=c;
        arr=new int[capacity];
        size=0;
    }
    int left(int i)
    {
        return ((2*i)+1);
    }
    int right(int i)
    {
        return ((2*1)+2);
    }
    int parent(int i)
    {
        return (i-1)/2;
    }
};
int main()
{

return 0;
}