import java.util.Scanner;
class takinginputfromuser{
	public static void main(String args[]){
		Scanner myobj= new Scanner(System.in);
		String username;
		
		System.out.println("enetr the username");
		username= myobj.nextLine();
		
		System.out.println("so the username of the person is "+username);
	}
}