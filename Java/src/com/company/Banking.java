package com.company;
import java.util.Scanner;

public class Banking {
    public static double balance=10000.00;
    public String AcHolder;
    public  String AcNumber="182972513";
    Banking(){}
    Banking( String name){
        this.AcHolder=name;
    }
    public double checkBalance(){
        return balance;
    }
    public void withdraw(double amnt){
        if(amnt==0)
            return;
        else if(checkBalance()>=amnt){
            balance=balance-amnt;
            System.out.println("Withdrawing");
            System.out.println("Current Balance is "+checkBalance());
        }
        else
            System.out.println("Insufficient Balance!");
    }
    public void deposite(double amnt){
        if(amnt==0)
            return;

        balance=balance+amnt;
        System.out.println("Amount Deposited");
        System.out.println("Current Balance is "+checkBalance());
    }


}
class Acount extends Banking{
    Acount(String name){
        super(name);
    }
    public void AcountDetails(){
        System.out.println("A/c Holder: "+super.AcHolder);
        System.out.println("A/c Number: "+super.AcNumber);
        System.out.println("Available Balance: "+checkBalance());
    }
    public  static void main(String args[]){
        Acount obj=new Acount("Hritesh Dubey");

        while(true) {
            int opt;
            System.out.println("Choose an operation");
            System.out.println("1: Check Balance,  2: Deposite,  3: Withdraw, 4: A/C Details, 5: Exit");
            Scanner sc=new Scanner(System.in);
            opt=sc.nextInt();
            switch (opt) {
                case 1:
                    System.out.println("\nCurrent Balance:" + obj.checkBalance());
                    break;
                case 2:
                    System.out.println("Enter amount to deposit:");
                    double amnt = sc.nextDouble();
                    obj.deposite(amnt);
                    break;
                case 3:

                    System.out.println("Enter amount to be withdrawn:");
                    double amt = sc.nextDouble();
                    obj.withdraw(amt);
                    break;
                case 4:
                    obj.AcountDetails();
                    break;
                case 5:
                    System.out.println("Terminated.");
                    return;

                default:
                    System.out.println("Invalid input.");
                    break;
            }
        }

    }

}
