import java.util.Scanner;
class Fibonacci
{	
	private int n;
	Fibonacci(){n=0;}
	public void getLimit()
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number of terms you want ");
		n=sc.nextInt();
	}
	public void showFibo(int a)
	{
		int n1=0,n2=1,n3=0;
		System.out.print(n1+" "+n2);
               	for(int i=1;i<=a-2;i++)
		{
                	n3=n1+n2;
			System.out.print(" "+n3);
               	        n1=n2;
                	n2=n3;
		}
	}
	public void compute()
	{
		System.out.print("The Fibonacci series upto "+n+" is ");
		showFibo(n);
	}
	public static void main(String args[])
	{
		Fibonacci ob=new Fibonacci();
		ob.getLimit();
		ob.compute();
	}
}
	