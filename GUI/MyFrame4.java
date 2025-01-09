import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

import javax.swing.JButton;
import javax.swing.JOptionPane;

import javax.swing.JComboBox;
import javax.swing.ButtonGroup;
import javax.swing.JRadioButton;

import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.Color;

import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;

public class MyFrame4 implements ActionListener 
{
    private JButton btn_login;
    private JButton btn_cancel;
    private JTextField txt_password;
    private JTextField txt_username;
    private JFrame myframe4;
    //private JRadioButton lbl_rad = null;

    
    JComboBox cb = null;

    JRadioButton jb1 =new JRadioButton();
    JRadioButton jb2=new JRadioButton();
   
    JButton jb;
    ButtonGroup g1;
    JLabel L1;

    MyFrame4() 
    {
        myframe4 = new JFrame("Login Frame");
        myframe4.setVisible(true);
        myframe4.setSize(500, 400);
        myframe4.getContentPane().setBackground(Color.CYAN);
        myframe4.setLocation(800, 600);
        myframe4.setLayout(null);

        cb = new JComboBox();
        myframe4.add(cb);
        cb.setBounds(160,100,100,20);
        cb.addItem("FE");
        cb.addItem("SE");
        cb.addItem("TE");
        cb.addItem("BE");

        //Radio Button
       g1 = new ButtonGroup();
       L1 = new JLabel("Gender");
       jb1.setText("Male");
       jb2.setText("Female");
      
       jb1.setBounds(90,180,100,20);
       jb2.setBounds(200,180,100,20);
  
       L1.setBounds(30,180,100,20);
       myframe4.add(jb1);
       myframe4.add(jb2);
      
       myframe4.add(L1); 
       g1.add(jb1);
       g1.add(jb2);
       jb1.addActionListener(this);
       jb2.addActionListener(this);

     

       

        

        /*lbl_rad = new JRadioButton("Gender");

        myframe4.add(lbl_rad);
        lbl_rad.setBounds(60,180,100,20);

        ButtonGroup bg = new ButtonGroup();
        bg.add(lbl_rad);
        */
        

        //username
        JLabel lbl_username = new JLabel("Username :");
        myframe4.add(lbl_username);
        lbl_username.setBounds(60,40,90,50);

        txt_username = new JTextField(); // Initialize txt_username
        myframe4.add(txt_username);
        txt_username.setBounds(150,60,100,15);

        // password
        JLabel lbl_password = new JLabel("Password  :");
        myframe4.add(lbl_password);
        lbl_password.setBounds(60,60,90,50);

        txt_password = new JTextField(); // Initialize txt_password
        myframe4.add(txt_password);
        txt_password.setBounds(150,80,100,15);

        // login button
        btn_login = new JButton("Login");
        myframe4.add(btn_login);
        btn_login.setBounds(60,140,90,30);
        btn_login.addActionListener(this);

        // cancel button
        btn_cancel = new JButton("Cancel");
        myframe4.add(btn_cancel);
        btn_cancel.setBounds(200,140,90,20);
        btn_cancel.addActionListener(this);
       

        txt_username.addKeyListener(new KeyAdapter() 
        {
            public void keyReleased(KeyEvent ke) 
            {
                if( ke.getKeyCode() == 10)  
                {
                    System.out.println("Enter clicked"); //using this method for avoiding duplication of code from actionlistener
                    //login(); 
                    //System.out.println(ke.getKeyCode()); 
                    txt_password.requestFocusInWindow(); //after clicked Enter it goes to next TextBox          
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
            JOptionPane.showMessageDialog(null,"Login successful! Welcome to our Family!!");
            myframe4.setVisible(true);
           
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
        MyFrame4 myframe4 = new MyFrame4(); 
    }

    
    public void actionPerformed(ActionEvent ae) 
    {
       String Gender ="" ;
        if (ae.getSource() == btn_login) 
        {   login();
            
           // login();

        } 
        else if (ae.getSource() == btn_cancel) 
        {
            JOptionPane.showMessageDialog(null,"Thank you,Come again!! We are here to help you");
        }
        else if(ae.getSource() == cb)
        {
            JOptionPane.showMessageDialog(null,"Combo button is selected");
        }
        else if (ae.getSource() == jb1) {
            if (jb1.isSelected()) {
                JOptionPane.showMessageDialog(null, "Selected gender is Male");
            }
        } else if (ae.getSource() == jb2) {
            if (jb2.isSelected()) {
                JOptionPane.showMessageDialog(null, "Selected gender is Female");
            }
        } else {
            JOptionPane.showMessageDialog(null, "Gender not selected");
        }
       /*  
       else if(  ae.getSource() == jb1)
       {   if( jb1.isSelected())
          {
            JOptionPane.showMessageDialog(null,"Selectd gender is Male");
           }
              Gender ="Male";
              
       }
       else if(  ae.getSource() == jb2)
       {      if(jb2.isSelected())
        {
        JOptionPane.showMessageDialog(null,"Selectd gender is Female");
           }
               Gender ="Female";
       }
       else 
             Gender = "not seleced ";
*/
       // {
           // lbl_rad.isSelected();
           // JOptionPane.showMessageDialog(null,"Radio buttton is selected");
       // }


     /*    if(maleButton.isSelected())
        {
            lbl_rad.isSelected();
           JOptionPane.showMessageDialog(null,"Selectd gender is Male");
        }
        else if()
   */
    }
}