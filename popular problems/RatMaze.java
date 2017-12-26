import java.util.Stack;

class Pos{
	private int x;
	private int y;

	public Pos(){};


	public Pos(int x,int y){

		this.x = x;
		this.y = y;

		}
	public void setPos(int x,int y){
		this.x = x;
		this.y = y;
		}

	public int getX(){
		return x;
		}
	public int getY(){
		return y;
		}

}
class MazeUtil{
	public static boolean isSafe(Pos pos,int[][] maze,int[][] sol,int n){
		boolean status = false;
		if(pos.getX()<n && pos.getY()<n && pos.getX()>=0 && pos.getY()>=0 && maze[pos.getX()][pos.getY()] == 1){

				if(sol[pos.getX()][pos.getY()]==0){
					 status =true;
					}

			}
		return status;
		}

	public static int[][] implementStep(Pos pos,int[][] solu){
		solu[pos.getX()][pos.getY()] = 1;
		return solu;
		}

	public static int[][] backtrackStep(Pos pos,int[][] solu){
		solu[pos.getX()][pos.getY()] = 0;
		return solu;
		}
	public static void printMatrix(int[][] mat,int rows,int cols){
		for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
           System.out.print(mat[i][j]+" ");
		 	}
		 	System.out.println();
		  }
		}

}


class RatMaze{
	public static void main(String[] args){
		int[][] maze= {
						 {1,1,1,0,0},
					     {1,1,0,0,0},
					     {0,1,1,0,0},
					     {1,0,1,0,1},
				         {1,1,1,1,1}
					  };

		int[][] solu= {
					   	 {0,0,0,0,0},
			    	     {0,0,0,0,0},
				         {0,0,0,0,0},
					     {0,0,0,0,0},
					     {0,0,0,0,0}
					  };
		int n = 5; //size of the square matrix
		Stack<Pos> s = new Stack<Pos>();
		Pos start = new Pos();


		start.setPos(0,0);//Position where there is an entry to the maze
		solu = MazeUtil.implementStep(start,solu);
		s.push(start);

		Pos end = new Pos();
		end.setPos(3,4);//Position of the exit to the maze
		solu = solvePuz(maze,solu,s,start,end);

		System.out.println("Result here---------");
		System.out.println("Following is just a solution not the optimum solution");
		MazeUtil.printMatrix(solu,n,n);
  }
    public static int[][] solvePuz(int[][] maze,int[][] sol,Stack<Pos> stepStack,Pos step,Pos end){

  		MazeUtil.printMatrix(sol,5,5);

  	  if(step.getX()==end.getX() && step.getY()==end.getY()){
  		  sol = MazeUtil.implementStep(step,sol);
  		  System.out.println("Maze Solved Successfully");

  		  }else{

  		if(stepStack.isEmpty()){
  			System.out.println("Solution not possible");
  		}else{

  //---------------------------------------move left-------------------------------------------
  			step.setPos(step.getX(),step.getY()-1);
  			if(MazeUtil.isSafe(step,maze,sol,5)){



  					stepStack.push(new Pos(step.getX(),step.getY()));
  					sol = MazeUtil.implementStep(step,sol);

  					System.out.println("pushed "+step.getX()+" "+step.getY());


  					solvePuz(maze,sol,stepStack,step,end);
  					}else{
  							step.setPos(step.getX(),step.getY()+1);


  //---------------------------------------move right-------------------------------------------
  			step.setPos(step.getX(),step.getY()+1);
  			if(MazeUtil.isSafe(step,maze,sol,5)){

  					stepStack.push(new Pos(step.getX(),step.getY()));
  					sol = MazeUtil.implementStep(step,sol);
  					System.out.println("pushed "+step.getX()+" "+step.getY());



  					solvePuz(maze,sol,stepStack,step,end);

  						}else{
  							step.setPos(step.getX(),step.getY()-1);

  //---------------------------------------move up-------------------------------------------
  			step.setPos(step.getX()-1,step.getY());
  			if(MazeUtil.isSafe(step,maze,sol,5)){

  					stepStack.push(new Pos(step.getX(),step.getY()));
  					sol = MazeUtil.implementStep(step,sol);
  					System.out.println("pushed "+step.getX()+" "+step.getY());



  					solvePuz(maze,sol,stepStack,step,end);

  						}else{
  							step.setPos(step.getX()+1,step.getY());

  //---------------------------------------move down-------------------------------------------

  				step.setPos(step.getX()+1,step.getY());
  			if(MazeUtil.isSafe(step,maze,sol,5)){

  					stepStack.push(new Pos(step.getX(),step.getY()));
  					sol = MazeUtil.implementStep(step,sol);
  					System.out.println("pushed "+step.getX()+" "+step.getY());



  					solvePuz(maze,sol,stepStack,step,end);

  						}else{
  							step.setPos(step.getX()-1,step.getY());

  //---------------------------------------no movement-------------------------------------------
					if(stepStack.isEmpty()){
						System.out.println("No Solution possible");
						}else{
  					step = stepStack.pop();
  					sol[step.getX()][step.getY()]=2;
					if(stepStack.isEmpty()){
						System.out.println("No solution possible");
						}else{
  					step = stepStack.pop();

  					System.out.println("popped "+step.getX()+" "+step.getY());
  					stepStack.push(new Pos(step.getX(),step.getY()));
  					solvePuz(maze,sol,stepStack,step,end);
				}
				}
  				}
}}}}
  			}
  			return sol;
  	  }

}

//PS - This is just a solution not the optimum solution
