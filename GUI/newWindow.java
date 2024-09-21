//java Database Connectivity
import java.awt.EventQueue;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.BorderLayout;
import javax.swing.JTextField;
import javax.swing.JMenuBar;
import javax.swing.JLabel;

public class newWindow implements ActionListener {

	private JFrame frame;
	private JTextField textField;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) 
	{
		EventQueue.invokeLater(new Runnable() 
		{
			public void run() 
			{
				try 
				{
					newWindow window = new newWindow();
					window.frame.setVisible(true);
				} 
				catch (Exception e) 
				{
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public newWindow() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() 
	{
		frame = new JFrame();
		frame.setBounds(100, 100, 560, 335);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JButton btnNewButton = new JButton("Submit");
		btnNewButton.setBounds(101, 99, 99, 26);
		frame.getContentPane().add(btnNewButton);
		btnNewButton.addActionListener(this);
		
		textField = new JTextField();
		textField.setBounds(101, 48, 126, 26);
		frame.getContentPane().add(textField);
		textField.setColumns(10);
		
		JLabel lblNewLabel = new JLabel("Enter Marks");
		lblNewLabel.setBounds(28, 53, 78, 16);
		frame.getContentPane().add(lblNewLabel);
	}
	public void actionPerformed(ActionEvent ae)
	{
		int mark=Integer.parseInt(textField.getText());
		try
		{
			Class.forName("com.mysql.cj.jdbc.Driver");
            Connection con=null;
            con=DriverManager.getConnection("jdbc:mysql://localhost:3306/d1","root","root");
            Statement stmt=con.createStatement();
            ResultSet rs= stmt.executeQuery("select * from student where marks >"+ mark);
            while(rs.next())
            {
            	System.out.println(rs.getInt(1)+" "+rs.getString(2)+" "+rs.getString(3));
            } 
			if(con != null)
            {
                 System.out.println("Connection Success");
            }
           else
           {
            System.out.println("Connection Fail");
           }
        }
        catch(ClassNotFoundException cnfe)
        {
            cnfe.printStackTrace();
        }
        catch(SQLException sq)
        {
            sq.printStackTrace();
        }
	}
}
