import java.util.*;
import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;
public class anagramcount{
    static BigInteger factor(int count) {
        BigInteger answer = new BigInteger("1");
        for(int i=count;i>=1;i--)
        {
            answer = answer.multiply(BigInteger.valueOf(i));
        }
        return answer;
    }
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        while(true)
        {
            String str = scn.next();
            int S = str.length();
            BigInteger Numerator = new BigInteger("1");
            Numerator= Numerator.multiply(factor(S));
            boolean [] found = new boolean[S];
            Arrays.fill(found,false);
            Vector<Integer>v = new Vector<Integer>(S);
            for(int i=0;i<S;i++)
            {
                int count =0;
                if(found[i]==false)
                {
                    found[i]=true;
                    for(int j=0;j<S;j++)
                    {
                        if(str.charAt(i)==str.charAt(j))
                        {
                            count++;
                            found[j]=true;
                        }
                    }
                    v.add(count);
                }
            }
            int count=0;
            for(int i=0;i<v.size();i++)
            {
                if(v.get(i)!=1)
                {
                    count++;
                }
            }
            if(count!=0)
            {
                BigInteger Denominator = new BigInteger("1");
                for(int i=0;i<v.size();i++)
                {
                    int c = v.get(i);
                    if(c!=1)
                    {
                        Denominator = Denominator.multiply(factor(c));
                    }
                }
                Numerator = Numerator.divide(Denominator);
                System.out.println(Numerator);
            }
            else
            {
                System.out.println(Numerator);
            }
        }


    }
}