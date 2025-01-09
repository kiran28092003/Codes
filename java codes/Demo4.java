class Parent
{
	void fun()
	{
		System.out.println("Parent ref1");
	}
	void gun()
	{
		System.out.println("Parent ref2");
	}
}
class Child extends Parent
{
	void fun()
	{
		System.out.println("child ref1");
	}
	void gun()
	{
		System.out.println("child ref2");
	}
	void run()
	{
		System.out.println("child ref3");
	}
}
class Demo
{
	public static void main(String []args)
	{
		Parent pref = new Parent();
		pref.fun();
		Child cref = new Child();
		cref.fun();
		pref.gun();
		cref.gun();
		cref.run();
		//pref.run();

		Parent pref2 = new Child();
		pref2.fun();
		pref2.gun();
		//pref2.run();
	}
}
