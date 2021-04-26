//to convert time in hh:mm:ss into seconds
#include <iostream>
using namespace std;
class Time{
	private:
		int h,m,s;
	public:	
	void getData()
	{
		cout<<"Enter Time:\n";
		cout<<"Hours : ";
		cin>>h;
		cout<<"Minutes : ";
		cin>>m;
		cout<<"Seconds : ";
		cin>>s;
	}
	void compute()
	{
		cout<<"The time is : ";
		h>10?cout<<h<<":":cout<<"0"<<h<<":";
		m>10?cout<<m<<":":cout<<"0"<<m<<":";
		s>10?cout<<s:cout<<"0"<<s;
		cout<<"\nTime in total seconds : "<<h*3600+m*60+s;
	}
};
int main()
{
	Time ob;
	ob.getData();
	ob.compute();
	return 0;
}
