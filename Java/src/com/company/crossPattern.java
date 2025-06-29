package com.company;

public class crossPattern {
    public static void main(String []args) {
        int n=3;
        for(int i=1; i<=2*n-1; i++){
            for(int j=1; j<=2*n-1; j++){

                if((i<=n)&& (j==i || j==2*n-i))
                        System.out.print(i);
                else if((i>n)&& (j==i || j==2*n-i))
                    System.out.print(2*n-i);
                else
                     System.out.print("-");
            }
            System.out.println();
        }
    }
}
