import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.Scanner;

public class newWindow1 {
	

	public static void main(String []args)
	{
		int choice;
		Scanner sc=new Scanner(System.in);
		do
		{
			System.out.println("1. Insert ");
			System.out.println("2. Update");
			System.out.println("3. Delete");
			System.out.println("0. Exit");
			System.out.println("Enter your Choice ");
			choice=sc.nextInt();
			switch(choice)
			{
			
			case 1:
			try
			{
					
					System.out.println("Enter Id.");
					int id=sc.nextInt();
					System.out.println("Enter first Name");
					String firstname=sc.next();
					System.out.println("Enter last Name");
					String lastname=sc.next();
					System.out.println("Enter DepartMent ");
					String dept=sc.next();
					System.out.println("Enter Address ");
					String addr=sc.next();
					System.out.println("Enter Marks ");
					int mark=sc.nextInt();
					Class.forName("com.mysql.cj.jdbc.Driver");
					Connection con=null;
					con=DriverManager.getConnection("jdbc:mysql://localhost:3306/ppa14","root","sanket");
					Statement stmt=con.createStatement();
					stmt.executeUpdate("insert into employee values("+id+",'"+firstname+"','"+lastname+"','"+dept+"','"+addr+"',"+ mark+")");
					System.out.println("record inserted successfully");

			}
			catch(ClassNotFoundException cnfe)
			{
				cnfe.printStackTrace();
			}
			catch(SQLException sq)
			{
				sq.printStackTrace();
			}
			break;
			case 2:
				try
				{
						System.out.println("Enter Existing ID which you want to update Record=");
						int prev_id=sc.nextInt();
						System.out.println("Enter Id.");
						int id=sc.nextInt();
						System.out.println("Enter First Name");
						String firstname=sc.next();
						System.out.println("Enter  last Name");
						String lastname=sc.next();
						System.out.println("Enter DepartMent ");
						String dept=sc.next();
						System.out.println("Enter Address ");
						String addr=sc.next();
						System.out.println("Enter Marks ");
						int mark=sc.nextInt();
						Class.forName("com.mysql.cj.jdbc.Driver");
						Connection con=null;
						con=DriverManager.getConnection("jdbc:mysql://localhost:3306/ppa14","root","sanket");
						Statement stmt=con.createStatement();
						stmt.executeUpdate("update employee set id="+id+",first_name='"+firstname+"',last_name='"+lastname+"',dept='"+dept+"',address='"+addr+"',marks="+mark+" where id="+prev_id);
						System.out.println("record updated successfully");
				}
				catch(ClassNotFoundException cnfe)
				{
					cnfe.printStackTrace();
				}
				catch(SQLException sq)
				{
					sq.printStackTrace();
				}
				
				break;
				
			case 3:
				try
				{
				System.out.println("Enter Id to delete record ");
				int id=sc.nextInt();
				Class.forName("com.mysql.cj.jdbc.Driver");
				Connection con=null;
				con=DriverManager.getConnection("jdbc:mysql://localhost:3306/ppa14","root","sanket");
				Statement stmt=con.createStatement();
				stmt.executeUpdate("delete from employee where id="+id);
				System.out.println("record deleted successfully");

				}
				catch(ClassNotFoundException cnfe)
				{
					cnfe.printStackTrace();
				}
				catch(SQLException sq)
				{
					sq.printStackTrace();
				}
				
				break;
				
			case 0: System.out.println("Exited");	
					break;
			}
	}while (choice !=0);
	}
}
