import java.util.scanner;
public class  Matrix{
public static void main(String args[])
{
int m,n,r,c;
Scanner in =new Scanner(System.in);
System.out.println("enter the number of rows and column of matrices:");
m=in.nextInt();
n=in.nextInt();
int first[][]=new int[m][n];
int second[][]=new int[m][n];
int sum[][]=new int[m][n];
System.out.println("enter the elements of matrix-1");
for(r=0;r<m;r++)
for(c=0;c<n;c++)
first[r][c]=in.nextInt();
System.out.println("enter the elements of matrix-2");
for(r=0;r<m;r++)
for(c=0;c<n;c++)
second[r][c]=first[r][c] +second[r][c];
