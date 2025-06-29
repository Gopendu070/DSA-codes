package  com.company;
import javax.swing.*;

import java.awt.event.ActionEvent;
import java.awt.event.*;

public class TrySwing {
    public static void main(String[] args) {
        JFrame f=new JFrame("first app");
        JTextField t1=new JTextField();
        JTextField t2=new JTextField();
        JButton b1=new JButton("add");
        JButton b2=new JButton("sub");
        JLabel l=new JLabel("Result: ");
        JLabel res=new JLabel();
        ActionListener addNum=new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                int a,b;
                a=Integer.parseInt(t1.getText());
                b=Integer.parseInt(t2.getText());
                int r=a+b;
                res.setText(r+"");
            }
        };
        ActionListener subNum=new ActionListener(){
            public void actionPerformed(ActionEvent e){
                int a, b;
                a=Integer.parseInt(t1.getText());
                b=Integer.parseInt(t2.getText());
                int r=a-b;
                res.setText(r+"");
            }
        };
        t1.setBounds(100,20,150,30);
        t2.setBounds(100,60,150,30);
        b1.setBounds(110, 100,60,30);
        b2.setBounds(180, 100,60,30);
        l.setBounds(130,150,90,20);
        res.setBounds(190,150,90,20);
        f.add(t1);
        f.add(t2);

        f.add(b1);
        b1.addActionListener(addNum);

        f.add(b2);
        b2.addActionListener(subNum);

        f.add(l);
        f.add(res);
        f.setSize(400,400);
        f.setLayout(null);
        f.setVisible(true);
       }
}  