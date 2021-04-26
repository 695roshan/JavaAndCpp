//Program to Check Whether a Number can be Express as Sum of Two Prime Numbers.
#include <iostream>
using namespace std;
int isPrime(int);
void sumOfPrime(int);
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    sumOfPrime(n);
    return 0;
}
int isPrime(int a)
{
    int i;
    for(i=2;i*i<=a;i++)
        if(!(a%i))
            return 0;
   	return 1;
}
void sumOfPrime(int x)
{
	int i,j;
	for(i=2;i<=x/2;i++)
		for(j=x-1;j>=x/2;j--)
			if(i+j==x && isPrime(i) && isPrime(j))
				cout<<x<<" = "<<i<<" + "<<j<<endl;
}

