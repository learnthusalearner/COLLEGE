import java.util.Scanner;

public class input {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = scan.nextLine();

        System.out.print("Enter your roll number: ");
        int rollNo = scan.nextInt();

        System.out.print("Enter your section: ");
        char section = scan.next().charAt(0);

        scan.nextLine(); // Discard newline character

        System.out.print("Enter your branch: ");
        String branch = scan.nextLine();

        System.out.println("\nName: " + name);
        System.out.println("Roll No: " + rollNo);
        System.out.println("Section: " + section);
        System.out.println("Branch: " + branch);
    }
}
