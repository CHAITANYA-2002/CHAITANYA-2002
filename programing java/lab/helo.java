class Example {
    int x; // instance variable
    static int y;
//static function can only access static variables 
    public void fun1() {

    }

    public static void fun2() {

    y=10;}


static class Test{
    public static String country ="INDIA";
}
}

public class helo  {
        public static void main(String[] argfs){

            Example exe1 =new Example(); 
            exe1.fun1();
            Example.fun2();
            System.out.println(Example.Test.country);
        }
    }

/*  ]

static member function are not the part of any object but its the part of the class 
 although static members are not the paft of objects , instead all the objects can useits values /
 static members are kept seerately and hecnce thier valyue is unique for all the objects 
 
 
 * Static  Member functions : 
 ther are not the part of objectd but its the part of class 
 it can be invoked directly using the class name 
 static meber func can ise only static data members


 contoleed flow statements:
 sequential programming  -- no loops no classes etc ;
 
 */