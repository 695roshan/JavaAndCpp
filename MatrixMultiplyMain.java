//to find the sum and product of 2 matrices
import java.util.*;
class MatrixMultiply
{
    private int[][] A,B,C;
    private int n;
    private Scanner sc;
    public MatrixMultiply()
    {
        A=null;
        B=null;
        C=null;
        n=0;
        sc=new Scanner(System.in);
    }
    public void getData()//to get the matrices from the user
    {
        System.out.print("Enter dimmension: ");
        n=sc.nextInt();
        A=new int [n][n];
        B=new int [n][n];
        C=new int [n][n];
        System.out.println("Enter elements for 1st matrix: ");
        getMatrix(A);
        System.out.println("Enter elements for 2nd matrix: ");
        getMatrix(B);
    }
    public void getMatrix(int[][] x)//to input the elements of a matrix
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                x[i][j]=sc.nextInt();
    }
    public void compute()//to find the sum and the product of 2 matrices
    {
        System.out.println("The sum of the matrices is: ");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int m=0;
                System.out.print((A[i][j]+B[i][j])+" ");
                for(int x=0;x<n;x++)
                    m+=A[i][x]*B[x][j];
                C[i][j]=m;
            }
            System.out.println();    
        }
        System.out.println("The product of the matrices is: ");
        for(int i=0;i<n;i++)
        {    
            for(int j=0;j<n;j++)
                System.out.print(C[i][j]+" ");
            System.out.println();
        }
    }
}
public class MatrixMultiplyMain 
{
    public static void main(String[] args) 
    {
        MatrixMultiply ob=new MatrixMultiply ();
        ob.getData();
        ob.compute();
    }
}
