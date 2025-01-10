//GUI
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.Color;
import java.awt.Font;

class MyFrame implements ActionListener
{
    public static void main(String[] args) 
    {
        JFrame myframe= new JFrame("Login Frame");
        myframe.setVisible(true);
        myframe.setSize(500,300);
        //myframe.setTitle("Login Frame");
        
        myframe.getContentPane().setBackground(Color.BLUE);
        myframe.setLocation(500, 500);
        myframe.setLayout(null);
        
        JLabel lbl_username=new JLabel("Username :");
        myframe.add(lbl_username);
        lbl_username.setBounds(80,20,70,30);
        lbl_username.setForeground(Color.LIGHT_GRAY);
        Font font=new Font("Serif",Font.BOLD,10);
        lbl_username.setFont(font);
        
        JLabel lbl_password=new JLabel("Password :");
        myframe.add(lbl_password);
        lbl_password.setBounds(80,60,70,30);
        lbl_password.setForeground(Color.LIGHT_GRAY);
        //Font font=new Font("Serif",Font.BOLD,34);
        lbl_password.setFont(font);


        JTextField txt_username = new JTextField();
        myframe.add(txt_username);
        txt_username.setBounds(150,20,140,30);

        JTextField txt_password = new JTextField();
        myframe.add(txt_password);
        txt_password.setBounds(150,60,140,30);

        JButton btn_login=new JButton("Submit");
        myframe.add(btn_login);
        btn_login.setBounds(100,100,100,30);

        JButton button1=new JButton("Cancel");
        myframe.add(button1);
        button1.setBounds(200,100,100,30);

        btn_login.addActionListener(new MyFrame());

    }
    public void actionPerformed(ActionEvent ae)
    {
        System.out.println("Log in ButtenClick");
    }
}
