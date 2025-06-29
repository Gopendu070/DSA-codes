package com.company;

public class Main {

    public static void main(String[] args) {
	// write your code here
        int n=4, m=5;
        for (int i=1;i<=n ; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(i==1 || i==4)
                    System.out.print("*");

                else if (i == 2 || i == 3)
                {
                    if (j == 1 || j == 5)
                        System.out.print("*");
                    else
                        System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}
