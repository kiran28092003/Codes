//GUI
import java.util.Scanner;
class InvalidUserNameExeption extends Exception{
    InvalidUserNameExeption()
    {
        System.out.println("Invalid Username");
    }
    InvalidUserNameExeption(String str)
    {
        super(str);
    }
    
}
class InvalidPasswordException extends Exception{
    InvalidPasswordException()
    {
        System.out.println("Invalid Password");
    }
    InvalidPasswordException(String str)
    {
        super(str);
    }
}

interface user
{
    void checkusername(String u)throws InvalidUserNameExeption;
    void checkpassword(String p)throws InvalidPasswordException;
}

class user1 implements user
{   
    Scanner sc=new Scanner(System.in);
    //java.io.Console cns = System.console();
    public void checkusername(String u)throws InvalidUserNameExeption
        {
           
            //System.out.println("Enter Original username");
            String username="sanket";
            if(u != username)
            {
            throw new InvalidUserNameExeption("Username not match");
            }
            System.out.println("User name allows");
        }
    public void checkpassword(String p)throws InvalidPasswordException
        {   
            //System.out.println("Enter Original password ");
            //String pwd=sc.nextLine();
            String pwd="sanket123";
            if(p != pwd)
            {
                throw new InvalidPasswordException("Password not match");
            }
            System.out.println("Password valid");

        }
        

}

class demo
{
    
    public static void main(String[] args) 
    {   int choice;
        user1 d=new user1();
        Scanner sc=new Scanner(System.in);
        //java.io.Console cns = System.console();
        
    do
    {
        System.out.println("0.Exit");
        System.out.println("1.Check username");
        System.out.println("2.Check Password");
        System.out.println("Enter Your Choice :");
        choice = sc.nextInt();
        switch(choice)
        {
            case 1:
                try{
                    System.out.println("Enter Username ");
                    String u=sc.next();
                    d.checkusername(u);
                }catch(InvalidUserNameExeption ae)
                {
                    ae.printStackTrace();
                }
                break;
            case 2:
                try{ 
                    System.out.println("Enter Password ");
                    String p=sc.next();
                    d.checkpassword(p);
                }catch(InvalidPasswordException ae)
                {
                    ae.printStackTrace();
                }
                break;
            case 0:
                System.out.println("Exit");
                break;

                
        }
    
    }while(choice!=0);
}
}
