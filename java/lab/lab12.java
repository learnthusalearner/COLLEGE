import java.util.Scanner;
class namerollsubbranch{
	public static void main(String args[]){
		Scanner myobj = new Scanner(System.in);
		
		System.out.println("enter the name");
		String name= myobj.nextLine();
		
		System.out.println("enter the roll number");
		int roll= myobj.nextInt();
		
		System.out.println("enter the subject");
		myobj.nextLine();
		String subject= myobj.nextLine();
		
		System.out.println("enter the branch");
		String branch= myobj.nextLine();
		
		
		System.out.println("name is "+name);
		System.out.println("roll number is "+roll);
		System.out.println("subject is "+subject);
		System.out.println("branch is "+branch);
	}
}
		
