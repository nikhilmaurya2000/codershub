import java.util.Scanner;

public class swap {

    public static void main(String[] args) {
        int a,b;

        Scanner ob = new Scanner(System.in);

        System.out.println("Enter two numbers");

        a = ob.nextInt();
        b = ob.nextInt();

        System.out.println("Before swapping: a="+a+" b="+b);
        a=a+b;
        b=a-b;
        a=a-b;

        System.out.println("After Swapping: a="+a+" b="+b);
    }
}
