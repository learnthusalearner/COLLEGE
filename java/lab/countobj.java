class ObjectCounter {
    // Static variable to keep track of the number of objects created
    private static int objectCount = 0;

    // Constructor increments the count when an object is created
    public ObjectCounter() {
        objectCount++;
    }

    // Static method to get the count of objects
    public static int getObjectCount() {
        return objectCount;
    }
}

public class Main {
    public static void main(String[] args) {
        // Create some objects to test the program
        ObjectCounter obj1 = new ObjectCounter();
        ObjectCounter obj2 = new ObjectCounter();
        ObjectCounter obj3 = new ObjectCounter();

        // Get and display the number of objects created
        int count = ObjectCounter.getObjectCount();
        System.out.println("Number of objects created: " + count);
    }
}