import java.io.*;

class Multicatch {

    public static void main(String args[]) {
        int a1[] = { 100, 200, 300, 400, 500 };
        System.out.println("Enter a number as array index and find out its value");
        System.out.println("enter end to come out of the program");
        try {
            String line;
            int X;
            BufferedReader d = new BufferedReader(new InputStreamReader(System.in));
            while ((line = d.readLine()) != null) {
                if (line.equals("end"))
                    break;
                else
                    try {
                        X = Integer.parseInt(line);
                        System.out.println("Valid element and it is :" + a1[X]);
                    } catch (ArrayIndexOutOfBoundsException e) {
                        System.out.println("invalid element");
                        System.out.println("exception generated :" + e);
                    } catch (NumberFormatException n) {
                        System.out.println("sorry no characters");
                        System.out.println("generated exception =" + n);
                    }
            }
        }

        catch (IOException i) {
        }
    }
}