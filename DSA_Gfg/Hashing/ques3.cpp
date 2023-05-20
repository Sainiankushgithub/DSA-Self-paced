//CHAIN IMPLEMENTATION 
/* 
   1.
   2.
   3.
*/
#include<bits/stdc++.h>
using namespace std;
class HashTable
{
   private:
   list<int>table;
   int size;
   public:
   HashTable(int size)
   {
      this->size=size;
      table.resize(size);
   }
};
int main()
{
   HashTable h(10);
return 0;
}