/*
  1 2 3 4 5
  1 2 3 4
  1 2 3
  1 2   
  1
 */
class pattern6 {
    static void main(int N)
 {
     for (int i = 1; i <= N; i++){
        for (int j = 1; j <= N-i; j++){
            System.out.print(j+" ");
        }
        System.out.println();
     }
 }
 
     public static void main(String[] args) {
         int N = 6;
         main(N);
     }
 }
 
