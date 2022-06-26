abstract class Animal{
     public abstract void printsound();
}

class Dog extends Animal{
    public void printsound(){
        System.out.println("Dog bark");
    }
}
class Cat extends Animal{
    public void printsound(){
        System.out.println("cat meow");
    }

}
class Monkey extends Animal{
    public void printsound(){
        System.out.println("monkeys whooop");
    }
}

class Mammal{
    public static void main(String args[]){
        Dog d = new Dog();
        Cat c = new Cat();
        Monkey m = new Monkey();
      d.printsound();
      c.printsound();
      m.printsound();
        
    }
}