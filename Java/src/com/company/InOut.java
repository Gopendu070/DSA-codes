package com.company;
class outer{
   int x=19, y=20;
    class inner{
        void fn(){
            System.out.println("Inner class 'fn'");
           System.out.println(x+y);
       }
   }

}

public class InOut {
    public static void main(String[] args) {
        System.out.println("In main class");
        outer out=new outer();
        outer.inner in=out.new inner();
        in.fn();

    }
}
