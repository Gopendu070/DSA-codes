package com.company;

public class A {
    void methodA(int x, int y){
        System.out.println(x+" + "+y+" = "+(x+y));
    }
}
class B extends A{
    @Override
    void methodA(int x, int y) {
        super.methodA(x,y);
        System.out.println(x+" - "+y+" = "+(x-y));
    }

    public static void main(String[] args) {
        B objB=new B();
        objB.methodA(15,6);
    }
}
