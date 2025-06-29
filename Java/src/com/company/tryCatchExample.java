package com.company;

public class tryCatchExample {
    public static int j;
    static void main(String args[]){
        for(int i=1;i<=4;i++){
            try{
                switch(i)
                {
                    case 1:
                        int d=0;
                        j=67/d;
                        break;
                    case 2:
                        int arr[]=null;
                        int g=arr[3];
                        break;
                    case 3:
                        int array[];
                        array=new int [4];
                        array[6]=56;
                        break;
                    case 4:
                        String ch="java";
                        System.out.println(ch.charAt(5));
                        break;
                }
            }
            catch(Exception e)
            {
                System.out.println(e);
            }
        }
    }
}
