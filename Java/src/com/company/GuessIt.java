package com.company;

import java.util.Random;
import java.util.Scanner;

public class GuessIt {
    static int i=0;
    public static int getNum(){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter your new guess : ");
        int n= sc.nextInt();
        System.out.println();
        return n;
    }
    public static void guessNum(int x, int actual){
i++;
        if(x==actual) {
            System.out.println("\n☠️: Conratulation \uD83C\uDF89\uD83C\uDF89!! Correct guess is " + x);
            System.out.println("Attempts: " + i);
            System.out.println("Accuracy: "+(100-(i*10))+"% (out of 10 attempts)");
        }
        else if(x<actual) {
            System.out.println("☠️: Then number is greater than " + x);
            guessNum(getNum(), actual);
        }
        else if(x>actual){
            System.out.println("☠️: The number is lesser than "+x);
            guessNum(getNum(), actual);

        }


    }

    public static void main(String[] args) {
        System.out.println("☠️: WELCOME TO THE GAME");
        Random in= new Random();
        int actualNum=in.nextInt(50)+1;
      //  System.out.println(actualNum);
        Scanner sc=new Scanner(System.in);
        System.out.print("☠️: Enter your guess b/w 1 to 50: ");
        System.out.println();
        int n= sc.nextInt();

      guessNum(n, actualNum);


    }
}
