class box{
	double width;
	double length;
	double height;

void volume(){
	System.out.print("volume is ");
	System.out.println(length*width*height);
}
}
class boxdemo{
	public static void main(String args[]){
		box mybox1= new box();
		box mybox2= new box();
		
		mybox1.length=10;
		mybox1.width=10;	
		mybox1.height=10;
		
		mybox2.length=2;
		mybox2.width=2;	
		mybox2.height=2;
		
		mybox1.volume();
		mybox2.volume();
	}
}
		
		
		
		
		
		
		