//cj.jdbc
import java.sql.*;
class Demo
{
    public static void main(String []args)
    {
        try{
             Class.forName("com.mysql.cj.jdbc.Driver");
             Connection con=null;
             con=DriverManager.getConnection("jdbc:mysql://Localhost:3306/sys","root","root");
        }catch(ClassNotFoundException cnfe)
	{
		cnfe.printStackTrace();
	}

    }
}