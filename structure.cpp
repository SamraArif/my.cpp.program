#include<iostream>
using namespace std;
struct samra
{
	int bcd;
};
struct qamar 
{
	int Length;
	int width;
	samra bcd;
};
int main()
{
	qamar mybrother;
	mybrother.Length=45;
	mybrother.width=15;
	cout<<mybrother.Length;	
	
}
