import java.math.BigInteger;
import java.util.Scanner;

public class catalan {
    static BigInteger factorial(int n)
    {
        BigInteger answer = new BigInteger("1");
        for(int i=2;i<=n;i++)
        {
            answer = answer.multiply(BigInteger.valueOf(i));
        }
        return answer;
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int t = scn.nextInt();
        for(int i=0;i<t;i++)
        {
            int number = scn.nextInt();
            BigInteger answer = factorial(number+1).multiply(factorial(number));
            answer = factorial(number*2).divide(answer);
            System.out.println(answer);
        }
    }
}
