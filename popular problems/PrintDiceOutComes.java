import java.util.Vector;
class PrintDiceOutComes{

	public static void main(String[] args){

			Vector<Integer> v = new Vector<>();

			diceOutcomes(2,v);

	}

	public static void diceOutcomes(int dleft,Vector<Integer> v){
		System.out.println("dleft :"+dleft+" vector"+v);

		if(dleft == 0){
			System.out.println(v);
			}else{

				for(int i=1;i<=6;i++){

					v.add(i);
					diceOutcomes(dleft-1,v);
					v.remove(v.size()-1);

				}

		}
}
}