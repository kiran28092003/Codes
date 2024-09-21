class BankAcc
{
	private int balance;
	
	public void setBalance(int balance)
	{
		if(balance>0)
		{
			this.balance=balance;
		}
	}
	public int getBalance()
	{
		return this.balance;
	}
}
class Clerk
{
	public static void main(String []args)
	{
		BankAcc ac=new BankAcc();

		ac.setBalance(-10000);
		System.out.println(ac.getBalance());
	}
}