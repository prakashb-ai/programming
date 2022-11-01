public class Student{
    private String name,city;
    private int age;

    public void getData(String x,String y,int t){
        name = x;
        city = y;
        age = t;
    }

    public void printData(){
        System.out.println("student name"+name);
        System.out.println("student city"+city);
        system.out.println("student age "+age);
    }
    class CS3{
        public static void main(String args[]){
            Student s1 = new Student();
            Student s2 = new Student();
            s2.getData("surya","usa",502);
            s2.printData();
            s1.getData("prakash","austraila",321);
            s1.printData();
        }
    }

}