// write a program of class concepts of string ,name,city

import java.util.*;

class Prog14{
    private String name,city;
    private int age;
    
    public void getData(String x,String y,int t){
        name = x;
        city = y;
        age = t;
    }
    public void printData(){
        System.out.println("student name="+name);
        System.out.println(" student city name="+city);
        System.out.println("student age"+age);
    }

    public static void main(String args[]){
        Prog14 s = new Prog14();
        s.getData("prakash","ichapuram",20);
        s.printData();
    }
}