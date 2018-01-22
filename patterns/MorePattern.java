class MorePattern{
	public static void main(String[] args){
		alphaD();
		System.out.println();
		shape1();
		System.out.println();
		pattern2();
		System.out.println();
		butterfly();
		System.out.println();
		hills();
	}

	public static void alphaD(){
		int max = 69;
		for(int i=0;i<5;i++){
			for(int j=65;j<70;j++){
				if(j==max){System.out.print((char)j); max--;}
				else System.out.print(" ");
				}
			if(i>0){
			for(int k=0;k<i-1;k++){
				System.out.print(" ");
				}
				System.out.print((char)(69-i));

			}
			System.out.println();
		}
		int min = 66;
		for(int i=0;i<4;i++){
			for(int j=65;j<=(i+66);j++){
				if(j==min){System.out.print((char)j);min++;}
				else System.out.print(" ");
				}
		if(i<3){
				for(int k=0;k<=(4-2*i);k++){
				System.out.print(" ");
			}
			System.out.print((char)(66+i));
		}
			System.out.println();
			}
	}

	public static void shape1(){
		for(int i=0;i<5;i++){

			for(int j=0;j<5;j++){

				if(j>= 5-i) System.out.print(" ");
				else System.out.print("*");
			}

			for(int l=0;l<i;l++)System.out.print(" ");

			for(int k=5;k>0;k--){
					if(k>5-i)continue;
					else System.out.print("*");
			}

			System.out.println();
		}


	}

	public static void pattern2(){
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				if(j<=i)System.out.print("*");
				else System.out.print(" ");
				}
			for(int k=5;k>0;k--){
				if(k<=i+1)System.out.print("*");
				else System.out.print(" ");
			}
			System.out.println();
			}
		}

	public static void butterfly(){

			for(int i=0;i<5;i++){
				for(int j=0;j<5;j++){
					if(j<=i)System.out.print("*");
					else System.out.print(" ");
				}
				for(int k=5;k>0;k--){
					if(k<=i+1)System.out.print("*");
					else System.out.print(" ");
					}
				System.out.println();
			}

			for(int i=0;i<5;i++){
				for(int j=0;j<5;j++){
					if(j>=4-i)System.out.print(" ");
					else System.out.print("*");
					}
				for(int k=0;k<5;k++)
				{
					if(k<=i)System.out.print(" ");
					else System.out.print("*");

				}
					System.out.println();
			}

		}

		public static void hills(){
			for(int i=0;i<4;i++){
				for(int j=0;j<3-i;j++){
					System.out.print(" ");
					}
				for(int k=0;k<=2*i;k++){
					System.out.print("*");
					}
				for(int l=1;l<=(6-2*i);l++){
					System.out.print(" ");
					}
				for(int m=0;m<=2*i;m++){
					System.out.print("*");
				}
					System.out.println();
				}

			}
}