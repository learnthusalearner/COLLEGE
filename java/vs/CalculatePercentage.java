import java.util.Scanner;
public class CalculatePercentage {

    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);

        System.out.println("Enter the obtained marks: ");
        int obtainedMarks = scan.nextInt();

        System.out.println("Enter the total marks: ");
        int totalMarks = scan.nextInt();

        double percentage = (obtainedMarks * 100.0) / totalMarks;

        System.out.println("Percentage: " + percentage + "%");
    }
}
