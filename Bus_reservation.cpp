#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
static int p;
class Bus
{
	public:
	char busn[5],driver[10],arrival[5],depart[5],strp[10],dest[10],seat[8][4][10];
	void install();
	void allotment();
	void empty();
	void show();
	void position(int i);
	void avail();
};
Bus bus[10];
	void vline(char ch)
	{
		int i;
		for(i=80;i>0;i--)
		cout<<ch;
	}
	void Bus:: install()
	{
		cout<<"Enter bus no. :";
		cin>>bus[p].busn;
		cout<<"\nEnter Driver's name :";
		cin>>bus[p].driver;
		cout<<"\nEnter Arrival Time :";
		cin>>bus[p].arrival;
		cout<<"\nEnter Departure Time :";
		cin>>bus[p].depart;
		cout<<"\nEnter Starting Point : ";
		cin>>bus[p].strp;
		cout<<"\n Enter Destination :";
		cin>>bus[p].dest;
		bus[p].empty();
		p++;
	}
	void Bus:: allotment()
	{
		int seat,n;
		char busno[5];
		top:
		cout<<"Bus no. :";
		cin>>busno;
		for(n=0;n<=p;n++)
			if(strcmp(bus[n].busn,busno)==0)
				break;
		while(n<=p)
		{	
			cout<<"\nSeat Number: ";
			cin>>seat;
			if(seat>32)
				cout<<"\nThere are only 32 seats available in this bus.";
			else
			{
				if(strcmp(bus[n].seat[seat/4][(seat%4)-1],"Empty")==0)
				{
					cout<<"Enter passenger's name: ";
					cin>>bus[n].seat[seat/4][(seat%4)-1];
					break;
				}
				else
					cout<<"The seat no. is already reserved.\n";
			}
			if(n>p)
			{
				cout<<"Enter correct seat no.";
				goto top;
			}	
		}
		
	}
	void Bus:: empty()
	{
		int i,j;
		for(i=0;i<8;i++)
			for(j=0;j<4;j++)
				strcpy(bus[p].seat[i][j],"Empty");
	}
	void Bus:: show()
	{
		int n;
		char busno[5];
		cout<<"Enter bus no. :";
		cin>>busno;
		for(n=0;n<=p;n++)
			if(strcmp(bus[n].busn,busno)==0)
				break;
		while(n<=p)
		{
			vline('*');	
			cout<<"\nBus no. :"<<bus[n].busn
			<<"\nDriver :"<<bus[n].driver
			<<"\nArrival Time :"<<bus[n].arrival
			<<"\nDeparture Time :"<<bus[n].depart
			<<"\nFrom : "<<bus[n].strp
			<<"\n To :"<<bus[n].dest<<endl;
			vline('*');
			bus[0].position(n);
			int a=0;	
			int i,j;
			for(i=0;i<8;i++){
				for(j=0;j<4;j++)
				{
					a++;
					if(strcmp(bus[n].seat[i][j],"Empty")==0)
						cout<<"\nThe seat no "<<a<<" is reserved for "<<bus[n].seat[i][j];
					}
			}
			break;
			if(n>p)
				cout<<"Enter correct bus no. ";
		}
	}
	void Bus:: position(int l)
	{
		int i,j,s=0,p=0;
		for(i=0;i<8;i++)
		{
			cout<<"\n";
			for(j=0;j<4;j++)
			{
				s++;
				cout.width(5);
				cout.fill(' ');
				cout<<s<<".";
				cout.width(10);
				cout.fill(' ');
				cout<<bus[l].seat[i][j];
				if(strcmp(bus[l].seat[i][j],"Empty")==0)				
					p++;
			}
		}
		cout<<"\n\nThere are "<<p<<" seats empty in Bus no: "<<bus[l].busn;
	} 
	void Bus:: avail()
	{
		for(int n=0;n<p;n++)
		{
			
			vline('*');	
			cout<<"\nBus no. :"<<bus[n].busn
			<<"\nDriver :"<<bus[n].driver
			<<"\nArrival Time :"<<bus[n].arrival
			<<"\nDeparture Time :"<<bus[n].depart
			<<"\nFrom : "<<bus[n].strp
			<<"\n To :"<<bus[n].dest<<endl;
			vline('*');
			vline('_');
		}
	}
	int main()
	{
		system("cls");
		int w;
		while(1)
		{
			cout<<"\n\n\n\n\n";
			cout<<"\t\t\t1.Install\n"
			<<"\t\t\t2.Reservation\n"
			<<"\t\t\t3.Show\n"
			<<"\t\t\t4.Buses Available \n"
			<<"\t\t\t5.Exit\n"
			<<"\t\t\tEnter your choice:->";
			cin>>w;
			switch(w)
			{
				case 1:bus[p].install();
						break;
				case 2:bus[p].allotment();
						break;
				case 3:bus[p].show();
						break;
				case 4:bus[p].avail();
						break;
				case 5:exit(0);	
			}
		}		
	}

