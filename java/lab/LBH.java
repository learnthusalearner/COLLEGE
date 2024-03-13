import java.util.Scanner;
class box
{
	double length;
	double breadth;
}
class area{

	static void area(double length,double breadth)
	{
		double area= length*breadth;
		System.out.println("The vol is "+area);
	}
	public static void main(String args[])
	{
	   Scanner scan=new Scanner(System.in);
		box box1=new box();
		box1.length=scan.nextDouble();
		box1.breadth=scan.nextDouble();
		area(box1.length,box1.breadth);
	}
}