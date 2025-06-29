package com.company;

import java.util.Random;
import java.util.Scanner;

public class RockPaperScisor {
    public static void main(String[] args) {
       for(int i=1; i<=3;i++) {
           System.out.println("Round "+i+" !!");
           Scanner sc = new Scanner(System.in);

           System.out.println("Enter 1 for ROCK \n Enter 2 for PAPER \n Enter 3 for SCISOR");
           System.out.print("Enter your choice: ");

           int choice = sc.nextInt();

           Random rndm = new Random();
           int compuuter = rndm.nextInt(3) + 1;
           System.out.println("Computer=> " + compuuter);
           if (choice == compuuter)
               System.out.println("DRAW");
           else if ((compuuter == 2 && choice == 1) || (compuuter == 1 && choice == 3) || (compuuter == 3 && choice == 2))
               System.out.println("You LOOSE!");
           else
               System.out.println("You WIN!");
       }
    }


}
