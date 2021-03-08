//to print the information (name, year of joining, salary, address) of three employees
import java.util.*;
class Employee
{
	private String name,ad;
	private int yr,sal;	
	public Employee()//deafult constructor
	{
		name=ad="";
		yr=sal=0;
	}
	public void getInfo()//to accept data from the employee
	{
		Scanner sc=new Scanner (System.in);
		System.out.print("Enter your name : ");
		name=sc.nextLine();
		System.out.print("Enter year of joining : ");
		yr=sc.nextInt();
		System.out.print("Enter salary : ");
		sal=sc.nextInt();
		sc.nextLine(); 
  		System.out.print("Enter your address : ");
		ad=sc.nextLine();
	}
	public void showInfo()//to display the data 
	{
		System.out.println("\nName : "+name);
		System.out.println("Year of joining : "+yr);
		System.out.println("Salary : "+sal);
		System.out.println("Address : "+ad);
	}
}
class EmployeeMain
{
	public static void main(String args[])
	{
		Employee ob1=new Employee();	
		Employee ob2=new Employee();
		Employee ob3=new Employee();
		ob1.getInfo();
		ob2.getInfo();	
		ob3.getInfo();
		ob1.showInfo();
		ob2.showInfo();	
		ob3.showInfo();
	}
}