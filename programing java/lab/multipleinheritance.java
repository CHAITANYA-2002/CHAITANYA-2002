/*

java does not support multiple inheritance 
but we can implement the same by using interfaces in java 


*/

interface AnimalEat {
    void eat();
 }
 interface AnimalTravel {
    void travel();
 }
 class Animal implements AnimalEat, AnimalTravel {
    
    //we have to mention all the messages in the class using the interface method we can implemet the multiple inheritance in java as well
    public void eat() {
       System.out.println("Animal is eating");
    }
    public void travel() {
       System.out.println("Animal is travelling");
    }
 }
 public class multipleinheritance {
    public static void main(String args[]) {
       Animal a = new Animal();
       a.eat();
       a.travel();
    }
 }

 /*
 method ko jab inplement krenge tb apan ko krna pdega uska sara kaam

 */ 