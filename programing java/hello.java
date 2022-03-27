import java.util.Scanner;  
public class hello {
       public static void main(String[] args) {
Scanner s = new Scanner(System.in); 
       double radius= s.nextDouble();
       double perimeter;
       double area;

       if((radius==0)||(radius<0))
{

  System.out.print("please enter non zero positive number");

}

         perimeter = 2 * Math.PI * radius;
         area = Math.PI * radius * radius;

        System.out.print(" " + perimeter);
        System.out.print("" + area);
}
}

