class Employee {
    // First constructor
    public Employee(String s, int i){
        System.out.println("The name of the first employee is : " + s);
        System.out.println("The id of the first employee is : " + i);
    }
    //    Constructor overloaded
    public Employee(String s, int i, int salary){
        System.out.println("The name of the second employee is : " + s);
        System.out.println("The id of the second employee is : " + i);
        System.out.println("The salary of second employee is : " + salary);
    }
    
}

public class constructoroverload {
            public static void main(String[] args) {
                Employee("Shubham",1);
                Employee("Harry",2,70000);
        
        
        
            }
        }
