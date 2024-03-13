class box{
	double width;
	double length;
	double height;
}
class boxdemo{
	public static void main(String args[]){
	box mybox= new box();
	
	mybox.width=10;
	mybox.length=10;
	mybox.height=10;
	
	double vol=mybox.width*mybox.length*mybox.height;
	
	
	System.out.println("the volume is"+" "+vol);
	}
}
