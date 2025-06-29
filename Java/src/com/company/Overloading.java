package com.company;

public class Overloading {
    // Constructor Overloading
    Overloading(){
        System.out.println("Without Parameters");
    }
    Overloading(int n){
        System.out.println("Given Integer is"+n);
    }
    Overloading(String str){
        System.out.println("Given String is"+str);
    }
    // Method overloading
    public void shapeArea(int r){
        double area=3.141*r*r;
        System.out.println("Area of circle= "+area);
    }
    public void shapeArea(int h, int w){
        double area=h*w;
        System.out.println("Area of rectangle= "+area);
    }
    public void shapeArea(int a, int b, int c){
        double s=(a+b+c)/2;
       double area=Math.sqrt(s*(s-a)*(s-b)*(s-c));
        System.out.println("Area of triangle= "+area);
    }

    public static void main(String[] args) {
        Overloading obj=new Overloading();
        obj.shapeArea(9);
        obj.shapeArea(9,8);
        obj.shapeArea(9,8,7);
    }
}


