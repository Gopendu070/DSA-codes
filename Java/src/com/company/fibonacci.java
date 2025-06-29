package com.company;

import java.util.Scanner;

public class fibonacci {

    public static void main(String[]arg){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the number of terms :");
        int n= sc.nextInt();
        int a=0, b=1, c;
        System.out.println(a);
        System.out.println(b);
        for(int i=1; i<=n-2; i++)
        {
            c=a+b;
            System.out.println(c);
            a=b;
            b=c;
        }
        System.out.print("Enter the n'th term: ");
        int x=sc.nextInt();
        System.out.println ("The "+x+"'th term is "+fibTerm(7));

    }
   public static int fibTerm(int n)
    {
        if (n <= 1)
            return n;
        return fibTerm(n - 2) + fibTerm(n - 3);
    }


}
