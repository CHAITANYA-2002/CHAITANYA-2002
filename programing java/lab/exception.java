class negtest {
    public static void main(String[] args) {
        try {
            int a1[] = new int[-2];
            System.out.println("1*element=" + a1[0]);
        } catch (NegativeArraySizeException n) {
            System.out.println("generated exception: " + n);

        }
        System.out.println("after try block");
    }
}