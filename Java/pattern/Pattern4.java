/*
 * 1
 * 2 2
 * 3 3 3
 */
public class pattern4 {
    static void main(int N){
        for(int i=1;i<=N;i++){
            for(int j=1;j<=i;j++){
                System.out.print(i+" ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        int N=4;
        main(N);
    }
}