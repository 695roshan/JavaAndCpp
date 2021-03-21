//Prime number challenge
import java.util.*;
class Prime
{
	private int n;
	public Prime(){n=0;}
	public void getNum()
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Please insert any number ");
		n=sc.nextInt();
	}
	public boolean isPrime(int a)
	{
		if (n<=1) return false;
		for(int i=2;i*i<a;i++)
			if (a%i==0)
				return false;
		return true;
	}
	public void compute()
	{
		if(isPrime(n))
			System.out.println(n+ " is a prime number ");
		else 
			System.out.println(n+ " is not a prime number ");
	}
}
class PrimeMain
{
	public static void main(String args[])
	{
		Prime ob=new Prime();
		ob.getNum();
		ob.compute();
	}
}
				