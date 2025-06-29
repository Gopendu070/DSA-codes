package com.company;

public class ForEachLoop {
    public static void main(String[] arg){
        int[] marks = { 125, 132, 95, 116, 110 };

        int highest_marks = maximum(marks);
        System.out.println("The highest score is " + highest_marks);
    }
public static int maximum(int [] arr)
{
    int max= arr[0];
    for(int element : arr)
    {
        if(element>max)
            max=element;
    }
return max;
}
}
