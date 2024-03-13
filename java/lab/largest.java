import java.util.Scanner;

class largest {
    public static void main(String args[]) {
        Scanner myObj = new Scanner(System.in);
        
        System.out.println("Enter the length of the array: ");
        int length = myObj.nextInt();
        
        int[] arr = new int[length];
        
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < length; i++) {
            arr[i] = myObj.nextInt();
        }
        
        int largest = arr[0];
        for (int i = 1; i < length; i++) {
            if (largest < arr[i]) {
                largest = arr[i];
            }
        }
        
        System.out.println("The largest number is: " + largest);
    }
}
