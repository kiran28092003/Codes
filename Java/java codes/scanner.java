class Scanner
{	public static void main(String []args)
	{
		java.util.Scanner sc = new java.util.Scanner(System.in);

		System.out.println("Enter your name");
		System.out.println(sc.nextLine());
		System.out.println(sc.next());
	}
}