package com.company;

public class SkipPrint {
    public  static  void  main(String[] args){   // 0, 2, 5, 9, 15
        int[] arr={0, 11, 2, 13, 4, 5, 6, 7, 8, 9, 10, 11, 12 , 13, 14, 15, 16, 17, 18};
        int i=0;
        int n=arr.length;
        int prev=0;
        while (i<n){

           if(prev+i<n) {
               System.out.println("val=" + arr[prev + i] +"\n");
           }
            prev=i+prev;
            i++;

        }
    }
}
