#include <iostream>
using namespace std;

int digitsum(int num)
{
	 int t=num;
	 int sum=0;
	 int extra;
	if (t==0)
	 {
		
		return 0;
	 }
	 else
	 {
		extra=t%10;
		sum= sum + extra;
		return sum + digitsum(t/10);
	 }
	
}

int main()
{
	int x=0;
	cout<<"enter a number "<<endl;
	cin>>x;
	
	cout<<"The number entered is: "<<x<<endl;
	digitsum(x);
	
	cout<<"The sum is: "<<digitsum(x)<<endl;
	return 0;
}
