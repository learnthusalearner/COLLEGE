/*
  * * * * *
  * * * *
  * * *
  * *   15 24 33 42 51
  *
 */
class pattern5 {
    static void main(int N)
 {
     for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N-i; j++){
            System.out.print("* ");
        }
        System.out.println();
     }
 }
 
     public static void main(String[] args) {
         int N = 6;
         main(N);
     }
 }
 
