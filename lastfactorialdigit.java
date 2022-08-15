import java.util.Scanner;
import java.math.BigInteger;
public class lastfactorialdigit {
    static BigInteger factorial(int n)
    {
        BigInteger answer = new BigInteger("1");
        for(int i=2;i<=n;i++)
        {
            answer = answer.multiply(BigInteger.valueOf(i));
        }
        return answer.mod(BigInteger.valueOf(10));
    }
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int cases = scn.nextInt();
        for(int i=0;i<cases;i++)
        {
            int num = scn.nextInt();
            System.out.println((factorial(num)));
        }
    }
}
