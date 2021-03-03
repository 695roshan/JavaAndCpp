//program to convert minutes into number of years and day
import java.util.*;
class MinToYear
{
	private int m,y,d;
	public MinToYear(){m=y=d=0;}//default constructor
	public void getMins()
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Input the number of minutes: ");
		m=sc.nextInt();
	}
	public void getYear()
	{
		y=(int)(m/(365*24*60));
		d=(m/(24*60))%365;
		System.out.println(m+" minutes is approximately "+y+" years and "+d+" days");	
	}
}

class MinToYearMain
{
	public static void main(String args[])
	{
		MinToYear ob=new MinToYear();
		ob.getMins();
		ob.getYear();
	}
}
	