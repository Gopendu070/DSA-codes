package com.company;

public class lcm {
    public static int Gcd(int n, int m){
        int l= n<m ? n:m;
        int g=1;
        for(int i=2; i<=l; i++){
            if(n%i==0 && m%i==0)
                g=i;
        }
        return  g;
    }
    public static void main(String []args) {
        int a=12, b=4;
        int gcd=Gcd(a, b);
        int lcm=(a*b)/gcd;
        System.out.println("LCM of "+a+", "+b+" is: "+lcm);

    }
}
