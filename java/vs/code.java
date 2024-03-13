import java.util.Scanner;
public class code
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int roll_number = sc.nextInt();
		System.out.println(convert_to_digit(roll_number));
	}
	
	public static String convert_to_digit(int roll_number){
     String word=" ";
     while (roll_number!=0){
         int digit = roll_number %10;
         switch(digit){
             case 0:
             word = "zero" +word;
             break;
             
             case 1:
             word = "one" +word;
             break;
             
             case 2:
             word = " two" +word;
             break;
             
             case 3:
             word = "three" +word;
             break;
             
             case 4:
             word = "four" +word;
             break;
             
             case 5:
             word = "five" +word;
             break;
             
             case 6:
             word = "six" +word;
             break;
             
             case 7:
             word = "seven" +word;
             break;
             
             case 8:
             word = "eight" +word;
             break;
             
             case 9: 
             word = "nine" +word;
             break;
             
             
             
         }
         
         roll_number=roll_number/10;
         
     }
     
     return word;
	}
}

