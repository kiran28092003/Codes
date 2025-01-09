import java.util.*;

class InvalidAmountException extends Exception
{
    public InvalidAmountException(String str)
    {
        super(str);
    }
}

class InsufficientFundException extends Exception
{
    public InsufficientFundException(String str)
    {
        super(str);
    }
}
interface Bank
{
    void withdrow(int wamount) throws InsufficientFundException,InvalidAmountException;
    void Deposit(int damount) throws InvalidAmountException;
    void balanceEnquiry();
}
abstract class HdfcBank implements Bank
{
    private int balance;
    HdfcBank()
    {
        this.balance = 1000;
    }

    public void withdrow(int wamount) throws InsufficientFundException, InvalidAmountException
    {
        if(wamount<=0)
        {
            throw new InvalidAmountException("Amount should be positive");
        }
        if(wamount>balance)
        {
            throw new InsufficientFundException("Withdrow amount is greater than 1000");
        }
        else
        {
            this.balance = this.balance - wamount;
        }
        System.out.println("Withdrowal successful");
        System.out.println("Current balance:"+balance);

    }
    public void deposit(int damount) throws InvalidAmountException
    {
        if(damount<=0)
        {
            throw new InvalidAmountException("Amount should be greater than zero");
        }
        else
        {
            this.balance = this.balance + damount;
        }
        System.out.println("Deposit successful");
        System.out.println("Current balance:"+balance);
    }
    public void balanceEnquiry()
    {
        System.out.println("Current balance is:"+balance);
    }
}
    class Cashier
    {
        public static void main(String[] args)
        {
            Scanner sc = new Scanner(System.in);
            
            Bank acc1 = new HdfcBank();
            while(true)
            {
                System.out.println("1.Deposit");
                System.out.println("2.Withdrow");
                System.out.println("3.Balance Enquiry");
                System.out.println("4.Exit");
                System.out.println("Choose an option");
                int choice = sc.nextInt();

                try{
                    switch(choice)
                    {
                        case 1:
                            System.out.println("Enter the amount to deposit:");
                            int damount = sc.nextInt();
                            acc1.deposit(damount);
                            break;
                        case 2:
                            System.out.println("Enter the amount to withdrow:");
                            int wamount = sc.nextInt();
                            acc1.withdrow(wamount);
                            break;
                        case 3:
                            acc1.balanceEnquiry();
                            break;
                        case 4:
                            System.out.println("Exit");
                            sc.close();
                            System.exit(0);
                            break;
                    }
                }
                catch(InvalidAmountException iae)
                {
                    System.out.println(iae.getMessage());
                }
                catch(InsufficientFundException ife)
                {
                    System.out.println(ife.getMessage());
                }

            }
        }
    }

