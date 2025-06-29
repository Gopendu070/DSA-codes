package com.company;

public class ArrayOps {
    public static void swaper(int []arr1, int []arr2){
        for(int i=0; i<arr1.length; i++){
            int temp=arr1[i];
            arr1[i]=arr2[i];
            arr2[i]=temp;
        }
    }
    public static void printer(int []arr){
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void sortingArr(int []arr){
        int n = arr.length;
        for (int j = 1; j < n; j++) {
            int key = arr[j];
            int i = j-1;
            while ( (i > -1) && ( arr [i] > key ) ) {
                arr[i+1] = arr[i];
                i--;
            }
            arr[i+1] = key;
        }
    }
    public static  void main(String [] args){
        int[] arr1={2, 4, 7, 3, 9};
        int[] arr2={7, 9, 8, 13, 6};
        swaper(arr1, arr2);
        System.out.println("Array1:");
        printer(arr1);
        System.out.println("Array2:");
        printer(arr2);
        System.out.println("Array1(after sorting):");
        sortingArr(arr1);
        printer(arr1);
        System.out.println("Array2(after sorting):");
        sortingArr(arr2);
        printer(arr2);
    }
}


