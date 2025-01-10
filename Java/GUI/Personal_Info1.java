import javax.swing.JFrame;
import java.awt.Color;
import java.awt.event.ActionListener;

import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JRadioButton;
import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.JTextField;
import java.awt.event.ActionEvent;
import javax.swing.JOptionPane;
class Personal_Information implements ActionListener 
{
    private JTextField name_text=null;
    private JTextField mobile_text=null;
    private JTextField email_text=null;
    private JTextField address_text=null;
    private JComboBox cb=null;
    private JButton submit=null;
    JRadioButton rb=null;
    JRadioButton rb1=null;
    ButtonGroup bg=null;
    Personal_Information()
    {
    JFrame pi=new JFrame();
    pi.setVisible(true);
    pi.setSize(500,500);
    pi.setTitle("Personal Information");
    pi.getContentPane().setBackground(Color.green);
    pi.setLocation(500,300);
    pi.setLayout(null);

    JLabel l_name=new JLabel("Name");
    pi.add(l_name);
    l_name.setBounds(100,100,100,30);

    name_text=new JTextField();
    pi.add(name_text);
    name_text.setBounds(200,100,80,20);

    JLabel l_mobile=new JLabel("Mobile_Number");
    pi.add(l_mobile);
    l_mobile.setBounds(100,150,100,20);

    mobile_text=new JTextField();
    pi.add(mobile_text);
    mobile_text.setBounds(200,150,80,20);

  

    JLabel l_email=new JLabel("Email");
    pi.add(l_email);
    l_email.setBounds(100,200,100,20);

    email_text =new JTextField();
    pi.add(email_text);
    email_text.setBounds(200,200,80,20);

    submit=new JButton("Submit");
    pi.add(submit);
    submit.setBounds(100,450,80,20);

    JLabel l_class=new JLabel("Class");
    pi.add(l_class);
    l_class.setBounds(100,250,100,20);

    String[] year={"SE","TE","BE"};
    cb=new JComboBox(year);
    pi.add(cb) ;
    cb.setBounds(200,250,100,20);

     rb=new JRadioButton("Male");
     rb1=new JRadioButton("FEMALE");

     bg=new ButtonGroup();
    bg.add(rb);
    bg.add(rb1);

    pi.add(rb1);
    pi.add(rb);
    rb.setSelected(true);
    rb.setBounds(200, 300, 80, 30);
    rb1.setBounds(300, 300, 100, 30);

    rb.addActionListener(this);
    rb1.addActionListener(this);
    cb.addActionListener(this);
    submit.addActionListener(this);


    }
    public static void main(String[] args)
    {
        Personal_Information pi=new Personal_Information();
    }
    public void actionPerformed(ActionEvent ae)
    {
        if(ae.getSource()==submit)
        {
            String name=name_text.getText();
            String mobile=mobile_text.getText();
            String email=email_text.getText();
            if(name.equalsIgnoreCase(""))
            {
                JOptionPane.showMessageDialog(null, "Name section should not be empty");
            }
            else if(mobile.equals(""))
            {
                JOptionPane.showMessageDialog(null, "Mobile section should not be empty");

            }
            else if(email.equalsIgnoreCase(""))
            {
                JOptionPane.showMessageDialog(null,"Email section should not be null");
            }
            else
            {
                for(int i=0;i<name.length();i++)
                {
                    if(!name.matches("[A-Z][a-z]*"))
                    {
                        JOptionPane.showMessageDialog(null,"Name is not valid");
                        break;
                    }
                    
                }
                if(mobile.length()!=10)
                {
                    JOptionPane.showMessageDialog(null,"Mobile Number is not valid");
                }
                else
                {

                    for(int i=0;i<mobile.length();i++)
                    {
                        if(!Character.isDigit(mobile.charAt(i)))
                        {
                            JOptionPane.showMessageDialog(null,"Mobile Number is not valid");
                            break;
                        }
                    }
                }

                if(!email.contains("@"))
                {
                    JOptionPane.showMessageDialog(null,"Not valid email");
                }
                else if(!email.endsWith(".com"))
                {
                    JOptionPane.showMessageDialog(null,"Not valid email");
                }

            }

        }
        else if(ae.getSource()==cb)
        {
            JComboBox cbref=(JComboBox)ae.getSource();
            String s=(String)cbref.getSelectedItem();
            if(s.equals("FE"))
            {
                JOptionPane.showMessageDialog(null,"FE IS  SELECTED");
            }
            else if (s.equals("SE"))
            {
                JOptionPane.showMessageDialog(null,"SE IS SELECTD");
            }
            else if(s.equals("TE"))
            {
                JOptionPane.showMessageDialog(null,"TE IS SELECTED");
            }
        }
        else if(ae.getSource()==rb)
        {
            JOptionPane.showMessageDialog(null,"MALE IS SELECTED");
        }
        else if(ae.getSource()==rb1)
        {
            JOptionPane.showMessageDialog(null,"FEMALE is SELETED");
        }
        
    }


    

    
}