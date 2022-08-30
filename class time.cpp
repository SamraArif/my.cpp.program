#include<iostream>
using namespace std;
enum dow{mon, tue, wed,thur,fri, sat,sun};
int main()
{
   dow d1,d2;
   d1 = mon;
   d2  = thur;
  int difference= d2-d1;
  cout<<"Day between mon through thur are"<<difference<<endl;
  if(d1<d2)
  cout<<"mon is come before thur";
}
