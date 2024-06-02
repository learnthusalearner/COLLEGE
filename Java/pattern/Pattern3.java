/*
 * 1
 * 1 2
 * 1 2 3
 */
public class pattern3 {
    static void main(int N){
        for(int i=1;i<=N;i++){
            for(int j=1;j<=i;j++){
                System.out.print(j +" ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int N=2;
        main(N);
    }
}