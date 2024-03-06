// SIMPLE HASHING CODE 
#include<bits/stdc++.h>
using namespace std;
class Hashtable{

   private:

   static const int Tablesize=10;                               // IT'S SIZE REMAIN SAME THROUGHOUT TEH EXECUTION OF THE PROGRAMM
   list<int>hashtable[Tablesize];
   int hashindex(int key)
   {
      return key%Tablesize;
   }

   public :

   void insert(int key);
   void remove(int key);
   void search(int key);
   void display()
   {
      int index=0;
      for(const auto &bucket:hashtable)
      {
         cout<<"Index "<<index++<<" : ";
         for(auto it=bucket.begin();it!=bucket.end();it++)
         {
            cout<<*it<<" ";
         }
         cout<<endl;
      }
   }                                                                      
};
void Hashtable :: insert(int key)
{
   int index=hashindex(key);
   hashtable[index].push_back(key);
}
void  Hashtable :: remove(int key)
{
   int index=hashindex(key);
   hashtable[index].remove(key);
}
int main()
{
   Hashtable h;
   h.insert(5);
   h.insert(15);
   h.insert(25);
   h.insert(35);
   h.insert(45);
   cout<<"Displaying your elements\n";
   h.display();
   cout<<"Removing the  element \n";
   h.remove(15);
   cout<<"After removing the specified element\n";
   h.display();
return 0;
}