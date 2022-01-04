import java.util.*;
import java.lang.*;
import java.io.*;
public
class div2
{

public
    static void main(String[] args) throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0)
        {
            long n = sc.nextLong();
            int p = sc.nextInt();
            long n1 = sc.nextLong();
            int p1 = sc.nextInt();

            if (p == p1)
            {
                if (n > n1)
                {
                    System.out.println(">");
                }
                else if (n < n1)
                {
                    System.out.println("<");
                }
                else
                {
                    System.out.println("=");
                }
            }
            else if (p > p1 || p < p1)
            {
                String s = "";
                String st = "";
                s += n;
                st += n1;

                if (s.length() + p > st.length() + p1)
                {
                    System.out.println(">");
                }
                else if (s.length() + p < st.length() + p1)
                {
                    System.out.println("<");
                }
                else
                {
                    int i = 0, j = 0;
                    boolean e = false, q = false;
                    while (i < s.length() && j < st.length())
                    {
                        if (s.charAt(i) > st.charAt(j))
                        {
                            e = true;
                            break;
                        }
                        else if (s.charAt(i) < st.charAt(j))
                        {
                            q = true;
                            break;
                        }
                        i++;
                        j++;
                    }
                    if (!e && !q)
                    {
                        while (i < s.length() && s.charAt(i) == '0')
                        {
                            i++;
                        }
                        if (i != s.length())
                        {
                            e = true;
                        }
                        while (j < st.length() && st.charAt(j) == '0')
                        {
                            j++;
                        }
                        if (j != st.length())
                        {
                            q = true;
                        }
                    }
                    if (e)
                    {
                        System.out.println(">");
                    }
                    else if (q)
                    {
                        System.out.println("<");
                    }
                    else
                        System.out.println("=");
                }
            }
        }
    }
}