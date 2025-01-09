import javax.swing.JFrame;
import java.awt.Color;
import javax.swing.JLabel;
import javax.swing.JComboBox;


import javax.swing.JTextField;
import javax.swing.JButton;
import javax.swing.JOptionPane;

import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

public class MyFrame3 implements ActionListener 
{

    private JButton btn_login;
    private JButton btn_cancel;
    private JTextField txt_password;
    private JTextField txt_username;
    private JFrame myframe;
    private JButton cb;
    private JButton cb1;

    MyFrame3() 
    {
        myframe = new JFrame("Login Frame");
        myframe.setVisible(true);
        myframe.setSize(500, 400);
        myframe.getContentPane().setBackground(Color.CYAN);
        myframe.setLocation(800, 600);
        myframe.setLayout(null);

        JComboBox cb = new JComboBox();
        myframe.add(cb);
        cb.setBounds(160,100,100,20);
        cb.addItem("FE");
        cb.addItem("SE");
        cb.addItem("TE");
        cb.addItem("BE");

        JComboBox cb1 = new JComboBox();
        myframe.add(cb1);
        cb1.setBounds(160,120,100,20);
        cb1.addItem("Sangmner");
        cb1.addItem("pune");
        cb1.addItem("Nashik");
        cb1.addItem("Mumbai");

        //String []cities = {"pune","mumbai","nashik","latur"};
        //JComboBox cb1 = new JComboBox();
        //myframe.add(cb1);
        //cb1.setBounds(160,100,100,30);

        //username
        JLabel lbl_useranme = new JLabel("Username :");
        myframe.add(lbl_useranme);
        lbl_useranme.setBounds(60,40,90,50);

        txt_username = new JTextField(); // Initialize txt_username
        myframe.add(txt_username);
        txt_username.setBounds(150,60,100,15);

        // password
        JLabel lbl_password = new JLabel("Password  :");
        myframe.add(lbl_password);
        lbl_password.setBounds(60,60,90,50);

        txt_password = new JTextField(); // Initialize txt_password
        myframe.add(txt_password);
        txt_password.setBounds(150,80,100,15);

        // login button
        btn_login = new JButton("Login");
        myframe.add(btn_login);
        btn_login.setBounds(60,140,90,30);
        btn_login.addActionListener(this);

        // cancel button
        btn_cancel = new JButton("Cancel");
        myframe.add(btn_cancel);
        btn_cancel.setBounds(200,140,90,30);
        btn_cancel.addActionListener(this);

        

        txt_username.addKeyListener(new KeyAdapter() 
        {
            public void keyReleased(KeyEvent ke) 
            {
                if( ke.getKeyCode() == 10)  
                {
                    System.out.println("Enter clicked"); //using this method for avoiding duplication of code from actionlistener
                    //login(); 
                    //System.out.println(ke.geyKeyCode()); 
                    txt_password.requestFocus(); //after clicked Enter it goes to next TextBox          
                }
            }
        });

      
        txt_password.addKeyListener(new KeyAdapter()
        {
            
            public void keyReleased(KeyEvent ke) 
            {
                if( ke.getKeyCode() == 10) 
                {
                    System.out.println("Enter clicked");
                    login();
                }
            }
        });
    }

    private void login() 
    {
        String user = txt_username.getText();
        String pass = txt_password.getText();

        if (("kiran".equalsIgnoreCase(user)) && ("8459405425".equals(pass)))
         {
            JOptionPane.showMessageDialog(null, "Login Success");
            myframe.setVisible(false);
           
        }
        else
        {
            JOptionPane.showMessageDialog(null, "Login Failed");
            txt_username.setText("");
            txt_password.setText("");
        }
    }
    public static void main(String[] args)
    {
        MyFrame3 myframe = new MyFrame3(); 
    }

    
    public void actionPerformed(ActionEvent ae) 
    {
        if (ae.getSource() == btn_login) 
        {
            System.out.println("Welcome to our Family!!");
            login();

        } 
        else if (ae.getSource() == btn_cancel) 
        {
            System.out.println("Thank you,Come again!! We are here to help you");
        }
        else if(ae.getSource()==cb)
        {
            System.out.println("selected!");
        }
        else if(ae.getSource()==cb1)
        {
            System.out.println("selected!");
        }
    }
}