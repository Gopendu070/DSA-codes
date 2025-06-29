package com.company;

import java.util.Scanner;

public class ThrowThrows {
    public static void sqrArea(int x, int y) throws ArithmeticException{
        System.out.println("#2 Inside the method");
        if(x<=0 || y<=0) throw new ArithmeticException("Invalid");  //throwing ArithmeticException acc. to the condition
        System.out.println("The area of the Rectangle is "+ x*y);

    }

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the length = ");
        int a= sc.nextInt();
        System.out.println("Enter the width = ");
        int b=sc.nextInt();

            try{
                System.out.println("#1 Inside try");
                sqrArea(a,b);
            }
             catch (Exception e){
                 System.out.println("#3 Inside catch");
                 System.out.println(e);

            }

}
}
