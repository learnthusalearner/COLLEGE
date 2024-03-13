import java.util.Scanner;

class EvenOdd {
    public static void main(String args[]) {
        Scanner myObj = new Scanner(System.in);

        System.out.println("Enter the length: ");
        int length = myObj.nextInt();

        int[] arr = new int[length];

        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < length; i++) {
            arr[i] = myObj.nextInt();
        }

        int evencount = 0;
        int oddcount = 0;

        for (int i = 0; i < length; i++) {
            if (arr[i] % 2 == 0) {
                evencount++;
            } else {
                oddcount++;
            }
        }

     
        System.out.println("Number of even numbers: " + evencount);
        System.out.println("Number of odd numbers: " + oddcount);
    }
}
