class box{
	double width;
	double length;
	double height;
}

class twobox{
	public static void main(String args[]){
		box mybox1= new box();
		box mybox2= new box();
		
		mybox1.length=10;
		mybox1.width=10;	
		mybox1.height=10;
		
		mybox2.length=2;
		mybox2.width=2;	
		mybox2.height=2;
		
		double vol1=mybox1.length*mybox1.width*mybox1.height;
		double vol2=mybox2.length*mybox2.width*mybox2.height;
		
		System.out.println(vol1);
		System.out.println(vol2);
	}
}
		
		
		
		
		
		
		