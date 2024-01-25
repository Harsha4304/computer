import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class login implements ActionListener{
    JFrame f1,f2;
    JButton b;
    JTextField t1,t2;
    JLabel stat,name,password;
    String ok_name = "dvns";
    String ok_password = "2004"; 
    login(){
        f1 = new JFrame("JNTU Login");
        f1.setSize(500,500);
        f2 = new JFrame("Result!!");
        f2.setSize(300,300);
        b = new JButton("Login");
        t1 = new JTextField("");
        t2 = new JTextField("");
        stat = new JLabel("Not yet decide");
        name = new JLabel("Username:");
        password = new JLabel("Password:");
        f1.setVisible(true);
        f2.setVisible(false);
        //f1.setLayout(new FlowLayout());
        f1.setLayout(null);
        f2.setLayout(new FlowLayout());
        f1.add(name);
        f1.add(t1);
        f1.add(password);
        f1.add(t2);
        f2.add(stat);
        f1.add(b);
        name.setBounds(0,0,100,50);
        t1.setBounds(150,0,300,50);
        password.setBounds(0,200,100,50);
        t2.setBounds(150 , 200 , 300 , 50);
        b.setBounds(0,300,150,50);
        //t1.addActionListener(this);
        //t2.addActionListener(this);
        b.addActionListener(this);
    }
    public void actionPerformed(ActionEvent e){
        if(e.getSource()== b){
            String temp_name = t1.getText();
            String temp_password = t2.getText();
            if (temp_name.equals(ok_name) && temp_password.equals(ok_password)){
                f1.setVisible(false);
                f2.setVisible(true);
                stat.setText("Login Successful!! :)");
            }
            else{
                f1.setVisible(false);
                f2.setVisible(true);
                stat.setText("Login Unsuccessful!! :(");
            }
            
        }
    }
    public static void main(String args[]){
        login mg = new login();
    }
}
