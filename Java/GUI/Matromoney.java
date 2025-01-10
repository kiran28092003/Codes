//GUI
import java.util.Scanner;
class InvalidAge extends Exception{
    InvalidAge()
    {
        System.out.println("Amount is Negative");
    }
    InvalidAge(String str)
    {
        super(str);
    }
}


interface marriage
{
    void man(int age)throws InvalidAge ;
    void women(int age)throws InvalidAge ;
    
}
class bride implements marriage
{
    
    public void man(int age) throws InvalidAge 
    {
        if(age < 21)
           throw new InvalidAge ("Invalid age");
            
        System.out.println("Valid age");

    }
    public void women(int age) throws InvalidAge
    {
        if(age < 21)
            throw new InvalidAge ("Invalid age");

        System.out.println("Valid age");
        
    }
   
}

class check
{
    public static void main(String[] args) 
    {   int choice;
        bride b=new bride();
        Scanner sc=new Scanner(System.in);
        
        do
        {
            System.out.println("0.Exit");
            System.out.println("1.check man age");
            System.out.println("2.check woman age");
            System.out.println("Enter your Choice");

            choice=sc.nextInt();
            switch(choice)
            {
                case 1:
                        try
                        {
                            int age;
                            System.out.println("Enter age of man ");
                            age=sc.nextInt();
                            b.man(age);

                        }catch(InvalidAge ae)
                        {
                            ae.printStackTrace();
                        }
                        break;
                case 2:
                        try
                        {
                            int age;
                            System.out.println("Enter age of women");
                            age=sc.nextInt();
                            b.women(age);

                        }catch(InvalidAge ae)
                        {
                            ae.printStackTrace();
                        }
                        break;
                
                case 0:
                        System.out.println("Exit");
                        break;
                        
            }

        }while(choice !=0);
    }
}