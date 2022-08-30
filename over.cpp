#include<iostream>
using namespace std;
void Life(int y, int z);
void Life(int g, int h, int o);
void Life(char e,int p);
int main()
{
	Life(4,8,6);
}
void Life(int y, int z)
{
	cout<<y*z;
}
void Life(int g, int h, int o)
{
	cout<<g*h*o;
}
void Life(char e, int p)
{
	cout<<'e';
}
