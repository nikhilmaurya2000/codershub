import java.util.Scanner;

public class NumDigitInNumbers {
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input number: ");
        int num = sc.nextInt();
        int numDigit = 0;
        if(num==0)
            numDigit = 1;
        else
        {
            while(num!=0)
            {
                numDigit++;
                num /= 10;
            }
        }
        System.out.println("Number of digit: " + numDigit);
    }
}
