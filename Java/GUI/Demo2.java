//cj.jdbc
import java.sql.*;
class Demo2
{
    public static void main(String []args) throws ClassNotFoundException, SQLException
    {
           Class.forName("com.mysql.cj.jdbc.Driver");
           Connection con=null;
           con=DriverManager.getConnection("jdbc:mysql://Localhost:3306/sys","root","root");
      	   if(con != null)
	   {
		System.out.println("Connection succed");
	   }
	else{
		System.out.println("Connection Failed");
	}
    }
}