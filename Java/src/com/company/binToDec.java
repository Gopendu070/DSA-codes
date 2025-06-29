package com.company;
import java.lang.Math;

public class binToDec {
    public static void main(String []args){
        int []bin;
        bin =new int[]{1,0,1,0};
        int n=bin.length;
        int dec=0;
        for(int i=0; i<=n-1; i++){
            dec+=bin[n-1-i]*Math.pow(2,i);
        }
        System.out.println(dec);

    }
}
