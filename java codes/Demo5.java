class Mobile_user
{
	public static void main(String []args)
	{
		Mobile Redmi =new Mobile();
		Redmi.insert_sim(new Jio());
	}
}
class Mobile
{
	void insert_sim(Sim s)
	{
		s.Calling();
		s.SMS();
	}
}
interface Sim
{
	void Calling();
	void SMS();
}
class Jio implements Sim
{
	public void Calling()
	{
		System.out.println("Jio Calling");
	}
	public void SMS()
	{
		System.out.println("Jio SMS");
	}

}
class Vi implements Sim
{
	public void Calling()
	{
		System.out.println("Vi Calling");
	}
	public void SMS()
	{
		System.out.println("SMS");
	}

}
class Airtel implements Sim
{
        public void Calling()
	{
		System.out.println("Airtel Calling");
	}
	public void SMS()
	{
		System.out.println("Airtel SMS");
	}

}