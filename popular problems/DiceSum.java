import java.util.Vector;

class DiceSum{
	public static void main(String[] args){
		Vector<Integer> v = new Vector<>();
		diceSum(v,3,0,9);

	}

	public static void diceSum(Vector<Integer> v,int dice,int currSum,int desiredSum){
			if(dice == 0){
				System.out.print(v);
				System.out.print(": "+currSum);
				System.out.println();
				}else{
					for(int i = 1;i<=6;i++){

						if(desiredSum >= currSum+i+1*(dice-1) && desiredSum <= currSum+i+6*(dice-1)){
						v.add(i);

						diceSum(v,dice-1,currSum+i,desiredSum);

						v.remove(v.size()-1);

					}
						}



					}

		}

}