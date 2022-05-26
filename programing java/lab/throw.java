class thro
{
    static void checkage(int age)
    {
        if (age<18)
        {
            throw new ArithmeticException("access deniedd you must be atleast18 years old");
        }
        else{
            System.out.println("access granted");
        }
    }


        public static void main(String[] args) 
        {
            checkage(15);
        }
      }
    