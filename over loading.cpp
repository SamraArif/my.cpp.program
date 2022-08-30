#include<iostream>
using namespace std;
void Add(int a, int b);
void Add(int a, int b ,int c);
void Add(char a, int b);
int main()
{
	Add(5,6,3);
	
}
void Add(int a, int b)
{
	cout<<a+b;
}
void Add(int a, int b, int c)
{
	cout<<a+b;
}
void Add(char a, int b)
{
	cout<<'a';
}
