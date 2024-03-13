class calculator{
	public int add2(int a,int b){
		return a+b;
	}
	public int add3(int a,int b,int c){
		return a+b+c;
	}
	public double add(double a,int b){
		return a+b;
	}
	
	public class demo{
		public static void main(String args[]){
			calculator obj =new calculator();
			int r=obj.add3(2,2,3);
			System.out.println(r);
		}
	}
}