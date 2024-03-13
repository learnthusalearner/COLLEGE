import java.util.Scanner;

abstract class Student {
    private int rollNo;
    private long regNo;

    public Student(int rollNo, long regNo) {
        this.rollNo = rollNo;
        this.regNo = regNo;
    }

    public void getInput() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter roll number: ");
        rollNo = scanner.nextInt();

        System.out.print("Enter registration number: ");
        regNo = scanner.nextLong();
    }

    public abstract String course(); // Abstract method to be implemented by subclasses

    public void displayDetails() {
        System.out.println("Rollno - " + rollNo);
        System.out.println("Registration no - " + regNo);
        System.out.println("Course - " + course()); // Calls the implemented course() method
    }
}

class Kiitian extends Student {
    public Kiitian(int rollNo, long regNo) {
        super(rollNo, regNo);
    }

    @Override
    public String course() {
        return "B.Tech. (Computer Science & Engg)";
    }
}

public class abstract1 {
    public static void main(String[] args) {
        Student student = new Kiitian(2205180, 1234567890L);
        // student.getInput(); // Unnecessary since constructor takes input
        student.displayDetails();
    }
}
