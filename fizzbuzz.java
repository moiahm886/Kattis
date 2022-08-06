import java.util.Scanner;
public class fizzbuzz {
    public static void main(String[] args) {
        int X,Y,N;
        Scanner scn = new Scanner(System.in);
        X = scn.nextInt();
        Y = scn.nextInt();
        N = scn.nextInt();
        for(int i = 1;i<=N;i++)
        {
            if(i%X==0&&i%Y==0)
            {
                System.out.println("FizzBuzz");
            }
            else if(i%X==0)
            {
                System.out.println("Fizz");
            }
            else if(i%Y==0)
            {
                System.out.println("Buzz");
            }
            else {
                System.out.println(i);
            }

        }
    }
}
