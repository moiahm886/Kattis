import java.util.Scanner;
import java.math.BigInteger;
public class simpleaddition {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String A = scn.next();
        String B = scn.next();
        BigInteger S = new BigInteger(A);
        BigInteger T = new BigInteger(B);
        BigInteger Answer = S.add(T);
        System.out.print(Answer);
    }
}
