package com.company;

import java.util.*;

public class decToBin {

    public static void main(String []args) {
        int num=15;
        ArrayList<Integer> bin = new ArrayList();
        while (num>0){
            bin.add(num%2);
            num=num/2;
        }

        for(int i=bin.size()-1; i>=0;i--){
            System.out.print(bin.get(i));
        }
    }
}
