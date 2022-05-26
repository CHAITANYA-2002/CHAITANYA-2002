
/*
The final keyword can be applied with the variables, a final variable that have no value it is called blank final variable or uninitialized final variable. It can be initialized in the constructor only. The blank final variable can be static also which will be initialized in the static block only. We will have detailed learning of these. Let's first learn the basics of final keyword.

*/

/*
this refers to the data members of the class 
super keywork refers to the data member of the base class 
super keywork is implemented in the same class but refers to the base class


*/

interface A {
    void method1();

    void method2();
}

interface B extends A {
    void method3();
}

class myclass implements B {
    public void method1() {
        System.out.println("A");
    }

    public void method2() {

        System.out.println("A");
    }

    public void method3() {

        System.out.println("c");
    }
}

class IFExtends {
    public static void main(String[] args) {
        {
            myclass object = new myclass();
            object.method1();
            object.method2();
            object.method3();
        }
    }

}
