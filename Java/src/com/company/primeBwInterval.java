package com.company;
import  java.util.Scanner;

public class primeBwInterval {
    public static int isPrime(int n){
        int c=0;
        for(int i=1; i<=n;i++){
            if(n%i==0)
                c++;
        }
        if(c==2)
            return 1;
        else
            return 0;
    }
    public static void main(String []args) {
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        int r = sc.nextInt();

        System.out.println("Prime no. between "+l+" and "+r);
        int c=0;
        for(int n=l; n<=r; n++){
            if(c==2)
                c=0;
            System.out.println("c="+c);
            if(c==0) {
                if (isPrime(n) == 1) {
                    System.out.println(n);
                }
            }
            c++;
            System.out.println("c="+c);
            }
        }
    }

