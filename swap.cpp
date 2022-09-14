#include<iostream>
using namespace std;
int swap(float &a,float &b)
{
	float t=a;
	a=b;
	b=t;
	return a,b;
}
int main()
{
	float a=0,b=0;
	cout<<"enter the a and b value:";
	if(cin>>a>>b&&a>0&b>0)
	{
		swap(a,b);
		cout<<"swapped value of a and b:"<<a<<" "<<b;
	}
	else
	cout<<"invalid input!!";
}
