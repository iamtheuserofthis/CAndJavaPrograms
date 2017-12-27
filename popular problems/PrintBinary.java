import java.util.Scanner;
class PrintBinary{

public static void main(String[] args){
	System.out.println("Enter the digit upto which you want to print the binary digits");
	Scanner s = new Scanner(System.in);
	int n = s.nextInt();
	printBin(n,"");

	}

public static void printBin(int digit,String val){
	if(digit == 0){
		System.out.println(val);
		}else{
			printBin((digit-1),val+"0");
			printBin((digit-1),val+"1");
		}

	}

}