package com.company;
import java.util.Scanner;

public class MatrixOps {
    public  static void disp(int [][]a, int n, int m){
        System.out.println();
        System.out.println("Matrix");
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
    }
    public  static void takeIP(int a[][], int n, int m){
        Scanner s=new Scanner(System.in);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                System.out.print("("+i+", "+j+"):");
                a[i][j]=s.nextInt();
            }}
    }
    public static void subtract(int [][]a, int [][]b, int n, int m ){
        int [][] res= new int[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                res[i][j]=a[i][j]-b[i][j];
            }
        }
        disp(res, n, m);
    }
    public static void add(int [][]a, int [][]b, int n, int m ){
        int [][] res= new int[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                res[i][j]=a[i][j]+b[i][j];
            }
        }
        disp(res, n, m);
    }
    public static void mul(int [][]a, int [][]b, int n, int m ) {

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                for (int k = 0; k < n; k++) {
                    // M[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
    public  static void transpose(int [][]a, int n, int m){
        int [][]t=new int[m][n];
        for(int i=0; i<n; i++) {
            for (int j = 0; j < m; j++) {
                t[j][i]=a[i][j];
            }
        }
        disp(t, m, n);
    }
    public  static  void createIdentity(){

        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the size of the Square Matrix:");
        int n=sc.nextInt();
        int [][] I=new int[n][n];
        for(int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if(i==j)
                    I[i][j]=1;
                else
                    I[i][j]=0;
            }
        }
        disp(I,n,n);
    }
    public static  void main(String args[]){
        int n, m;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter no of rows:");
        n=sc.nextInt();
        System.out.println("Enter no of columns:");
        m=sc.nextInt();
        int [][] a= new int[n][m];
        int [][] b= new int[n][m];
        takeIP(a,n,m);
        disp(a,n,m);
        takeIP(b,n,m);
        disp(b,n,m);
        int c;
        System.out.println("Choose an option:");
        System.out.println("1: Add, 2:Subtract, 3:Transpose, 4: Create Identity");
        c=sc.nextInt();
        switch(c){
            case 1:
                add(a,b,n,m);
                break;
            case 2:
                subtract(a,b,n,m);
                break;
            case 3:
                transpose(a,n,m);
                break;
            case 4:
                createIdentity();
                break;
            default:
                System.out.println("Wrong Input");
                break;
        }


    }
}
