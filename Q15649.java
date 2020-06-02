import java.util.Scanner;

public class Q15649 {

    static boolean visited[];
    static int num[];

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        int M = sc.nextInt();

        visited = new boolean [N+1];
        num = new int[M];

        int count = 0;
        bt(count,N,M);

    }
    public static void bt(int count,int n,int m)
    {
        if(count == m)
        {
            for(int j=0; j<m; j++)
            {
                System.out.print(num[j]+" ");
            }
            System.out.println();
            return;
        }

      for(int i=1;i<=n;i++)
      {

          if(!visited[i])
          {
              visited[i] = true;
              num[count] = i;
              bt(count+1,n,m);
              visited[i] = false;

          }
      }


    }



}
