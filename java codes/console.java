class Console
{
	public static void main(String []args)thraws Exception
	{
		java.io.Console cns = new System.console(System.in);
		System.out.println("Enter your name");
		char psd[]=cns.readPassward();

		System.out.println(psd);
	}
}