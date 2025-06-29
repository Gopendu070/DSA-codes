package com.company;
import  java.lang.*;
import java.util.Scanner;

public class TryCatch {
    static double divfun(int a, int b) throws Exception{
        double c=a/b;
        return c;
    }
    public static void main(String args[]) {
        int a = 90;
        int b=9;
        try {
            double c = divfun(a,b);
            System.out.println(c);
        } catch (Exception e) {
            System.out.println(e);
            System.out.println("You can't divide "+a+" by "+b);
        }finally {
            System.out.println("Done");
        }

    }

}
