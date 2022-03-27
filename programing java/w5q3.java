 
import java.util.Scanner;
  
public class w5q3 {
public static void main(String[] args) { 
    int a, b;
    Scanner input = new Scanner(System.in);
  a = input.nextInt();
  b = input.nextInt();

try{
System.out.print(a/b);
}
catch(ArithmeticException e)
{
 System.out.print("Exception caught: Division by zero");
}
  


}
}