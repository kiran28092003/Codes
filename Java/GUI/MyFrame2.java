import javax.swing.JFrame;
import java.awt.Color;
import javax.swing.JLabel;

import javax.swing.JTextField;
import javax.swing.JButton;
import javax.swing.JOptionPane;

import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

class PersonalInfo2 implements ActionListener
{
    JButton btn_submit=null;
    JTextField txt_name=null;
    JTextField txt_address=null;
    JTextField txt_number=null;
    JFrame myframe2=null;
    PersonalInfo2()
    {
        myframe2=new JFrame("Personal Info");
        myframe2.setVisible(true);
        myframe2.setSize(500,400);
        myframe2.setLocation(800,600);
        myframe2.setLayout(null);

        // name 
       JLabel lbl_name=new JLabel("Name");
       myframe2.add(lbl_name);
       lbl_name.setBounds(200,80,80,80);
       txt_name=new JTextField();
       myframe2.add(txt_name);
       txt_name.setBounds(280,110,90,20);

       // address
       JLabel lbl_address=new JLabel("Address  :");
       myframe2.add(lbl_address);
       lbl_address.setBounds(200,150,80,80);
       txt_address=new JTextField();
       myframe2.add(txt_address);
       txt_address.setBounds(280,180,90,20);

       // Mobile Number

       JLabel lbl_number=new JLabel("number  :");
       myframe2.add(lbl_number);
       lbl_number.setBounds(200,220,80,80);
       txt_number=new JTextField();
       myframe2.add(txt_number);
       txt_number.setBounds(280,250,90,20);

       // button

       btn_submit=new JButton("submit");
       myframe2.add(btn_submit);
       btn_submit.setBounds(200,280,90,20);
       btn_submit.addActionListener(this);

    }
    public static void main(String[] args) 
    {
        PersonalInfo2 personal_info=new PersonalInfo2();
    }

    public void actionPerformed(ActionEvent ae)
    {
        
        if(ae.getSource()==btn_submit)
        {
            String name=txt_name.getText();
            String add=txt_address.getText();
            String number=txt_number.getText();
            if(name.equals(""))
            {
                JOptionPane.showMessageDialog(null,"Name cant be empty");
            }
            else if(add.equals(""))
            {
                JOptionPane.showMessageDialog(null,"Address cant be empty");
            }
            else if(number.equals(""))
            {
                JOptionPane.showMessageDialog(null,"Number cant be empty");
            }
            else
            {
                JOptionPane.showMessageDialog(null,"Submited");
            }
        }
    }
}
