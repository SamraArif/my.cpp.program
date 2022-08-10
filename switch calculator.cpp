  #include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	int b;
	int x;
	char ch;
	  
	 
	 do
	 {
	 	cout<<"please enter first number";
	 	cin>>a;
	 	cout<<"please enter second number";
	 	cin>>b;
	 	cout<<"Please enter your choise\n1: Add\n2: subtraction\n3: sin of valueone\n4: cos of valuetwo\n5: for square Root of valueone\n6:to check the larger number\n7: for multiplication";
		 cin>>x;
		 switch(x)
		 {
		 	case 1:
			cout<<"result is:"<<a+b<<endl;
		 	break;
		 	case 2:
		 	cout<<"result is:"<<a-b<<endl;
		 	break;
		 	case 3:
	    	cout<<"result is:"<<sin(a)<<endl;
		 	break;
		 	case 4:
		 	cout<<"result is:"<<cos(b)<<endl;
		 	break;
		   case 5:
		   cout<<"result is:"<<sqrt(a)<<endl;
	    	break;
		 	case 6:
			cout<<"result is:"<<max(a,b)<<endl;
		 	break;
		 	case 7:
		 	cout<<"result is:"<<a*b<<endl;
		 	break;
		 	default:
		 	cout<<"invalid statement";
		 }
		  cout<<"press y to continue to another key exist";
		  cin>>ch;
	 }
	 while(ch=='y'|| ch =='y');
}
