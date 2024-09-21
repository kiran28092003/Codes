class Employee
{
	int eid;
	int esalary;
	String ename;
        String edesignation;
	Employee(int eid, String ename,int esalary,String edesignation)
	{
		System.out.println("Employee parameterised constructor");
		this.eid = eid;
		this.ename = ename;
		this.esalary = esalary;
		this.edesignation = edesignation;
	}
}
class Manager extends Employee
{
	int bonus;
	Manager(int eid,String ename,int esalary,String edesignation,int bonus)
	{
		super(eid,ename,esalary,edesignation);
		System.out.println("Employee parameterised constructor");

		this.bonus = bonus;
	}
}
class Demo
{	
	public static void main(String []args)
	{
		Manager Kiran = new Manager(120,"kiran",200000,"manager",20000);
	}
}