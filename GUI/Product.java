import java.util.Scanner;
class OutofStock extends Exception{
    OutofStock()
    {
        System.out.println("Product is out of stock");
    }
    OutofStock(String str)
    {
        super(str);
    }
}


interface company
{
    void pro_type(int n)throws OutofStock ;
}
class seller implements company
{
    
    public void pro_type(int n) throws OutofStock
    {
        int no=10;
        if(n> no)
           throw new OutofStock ("out of stock");
            
        System.out.println("Products available");

    }
   
   
}

class check1
{
    public static void main(String[] args) 
    {   int choice;
        seller s=new seller();
        Scanner sc=new Scanner(System.in);
        
        do
        {
            System.out.println("0.Exit");
            System.out.println("1.check availability of product");
            System.out.println("Enter your Choice");

            choice=sc.nextInt();
            switch(choice)
            {
                case 1:
                        try
                        {
                            int n;
                            System.out.println("Enter quantity ");
                            n=sc.nextInt();
                            s.pro_type(n);

                        }catch(OutofStock ae)
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