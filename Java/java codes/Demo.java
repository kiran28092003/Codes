class Demo
{
	int a;
	static int b;
	void fun()
	{
		System.out.println("Demo nonstatic fun"+a+b);
	}
	static void gun()
	{
		System.out.println("Demo static fun"+b);
	}
public static void main(String args[])
{
	Demo.gun();
	Demo d = new Demo();
	d.fun();
	d.gun();
}
}