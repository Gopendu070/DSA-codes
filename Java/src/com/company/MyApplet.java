package com.company;
import java.awt.*;
import java.applet.*;
public class MyApplet extends Applet {
    Label l1, l2;
    TextField t1, t2;
    Button b;
    public void init(){
        l1=new Label("First num: ");
        t1=new TextField();
        l2=new Label("Second num: ");
         t2=new TextField();
         b=new Button("ADD");
         setLayout(null);
        l1.setBounds(30,50,100,20);
        l2.setBounds(30,100,100,20);
        t1.setBounds(150,50,100,20);
        t1.setBounds(150,100,100,20);
        b.setBounds(100,150,80,20);
        add(t1);
        add(l1);
        add(t2);
        add(l2);
        add(b);
    }



}
