import java.util.*;
class Student{
    String name;
    String usn;
    float cgpa;
    Student(String name, String usn, float cgpa){
        this.name = name;
        this.usn = usn;
        this.cgpa = cgpa;
    }
    public void displayStudentDetails(){
        System.out.println("name: " + name);
        System.out.println("usn: " + usn);
        System.out.println("cgpa: " + cgpa);
    }
}

class StudentHashMap{
    public static void main(String args[]){
        HashMap<Integer, Student> s1 = new HashMap<>();
        s1.put(3, new Student("Rahul", "2SD22CS4354", 5.67f));
        s1.put(1, new Student("Rohan", "2SD22CS4", 9.9f));
        s1.put(2, new Student("Darshan", "2SD22CS454", 10f));
        System.out.println(s1);
        int choice = 1;
        Scanner sc = new Scanner(System.in);
        while(choice != 0){
            System.out.println("Enter 1 to search the student");
            System.out.println("Enter 0 to exit");
            System.out.println("Enter your choice");
            choice = sc.nextInt();
            if(choice == 1){
                System.out.println("Enter the rollno of the Student to be searched");
                System.out.println("The Student details are:");
                s1.get(sc.nextInt()).displayStudentDetails();
            }
            else if(choice == 0){
                System.out.println("You exited");
                break;
            }
            else{
                System.out.println("Enter the valid choice");
            }
        }
        sc.close();
    }
}