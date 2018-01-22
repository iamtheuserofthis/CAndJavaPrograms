class PatternPattern{
	public static void main(String[] args){

	printI();
	System.out.println();
	print8();
	System.out.println();
	printB();
	System.out.println();
	printC();
	System.out.println();
	printA();
	System.out.println();
	printS();
	System.out.println();
	}

	public static void printI(){
		int width = 11 ;
		int height= 14 ;
		int middle = (width/2)+1;

		for(int i=0;i<=height;i++){

			if(i==0 || i==height){
			for(int j=0;j<=width;j++){
				System.out.print("I");
			}
			System.out.println();
		}else{
			for(int k=0;k< (middle-1);k++)System.out.print(" ");
			System.out.print("I");
			System.out.println();
		}

	}
}

	public static void print8(){
		int height =11;
		int emploop = 8;
		int halfHeight = (height/2);

		for(int i=0;i<height;i++)
		{
			System.out.print("B");
			if(i==0 ||i==halfHeight || i==(height-1)){
				for(int k=0;k<emploop;k++)System.out.print("B");
			}else{
			for(int j=0;j<emploop;j++)System.out.print(" ");
			}
			System.out.print("B");
			System.out.println();

		}

		}

	public static void printB(){
		int height = 11;
		int emploop= 8 ;
		int halfHeight = height/2;


		for(int i=0;i<height;i++){

		if(i==0 || i==(height-1) || i==halfHeight){
				for(int j=0;j<emploop;j++){
				System.out.print("B");
			}
			System.out.println();
			continue;
			}else{

			System.out.print(" B");

				for(int j=0;j<emploop-2;j++){

				System.out.print(" ");
			}

			System.out.print("B");
			System.out.println();
			}

		}


	}

	public static void printC(){
		int height=10;
		int width=12;

		for(int i=0;i<height;i++){
		if(i==0||i==(height-1)){
			for(int j=0;j<width;j++){
				System.out.print("C");
				}
				System.out.println();
		}else{
			System.out.print("C");
			System.out.println();
		}

		}

	}

	public static void printA(){
			int height =10;
			int mid = (height/2)+1;
			int i=0;
			for(int j=0;j<height;j++){
			for(i=(height-j);i>=0;i--){
				System.out.print(" ");
			}
			for(int k=0;k<j;k++){
			if(k==0 || k==(j-1))System.out.print(" A");
			else if(j==mid){System.out.print(" A"); }
			else System.out.print("  ");
			}
			System.out.println();
		}


		}

	public static void printS(){
		int height = 15;
		int mid = height/2;
		int width = 20;

		for(int i=0;i<height;i++){

			if(i>=mid||i==0){

			for(int j=0;j<width;j++){

								if(i==mid||i==height-1||i==0)System.out.print("S");
								else System.out.print(" ");
				}
			}
			System.out.print("S");
			System.out.println();

		}
	}

}

