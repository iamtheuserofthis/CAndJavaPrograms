import java.util.Stack;

class MazeUtil{
	public static boolean isSafe(int x,int y,int[][] maze,int[][] sol,int n){
		boolean status = false;
		if(x<n && y<n && x>=0 && y>=0 && maze[x][y] == 1){

				if(sol[x][y]==0){
					 status =true;
					}

			}
		return status;
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


class RatMazeConventional{
     static int[][] sol= {
						   	 {0,0,0,0,0},
				    	     {0,0,0,0,0},
					         {0,0,0,0,0},
						     {0,0,0,0,0},
						     {0,0,0,0,0}
					  };

	public static void main(String[] args){
		int[][] maze= {
						 {1,1,1,0,0},
					     {1,1,0,0,0},
					     {0,1,1,0,0},
					     {1,0,1,0,1},
				         {1,1,1,1,1}
					  };


		int n = 5; //size of the square matrix

		solvePuz(maze,0,0,3,4,true);
		System.out.println("solution here-------------");
		MazeUtil.printMatrix(sol,5,5);


  }
    public static boolean solvePuz(int[][] maze,int x ,int y,int endx,int endy,boolean status){

		System.out.println();
		MazeUtil.printMatrix(sol,5,5);
		if(x==endx && y==endy){
			sol[x][y] =1;
			System.out.println("Maze has been solved");
			return true;

			}else{

				if(MazeUtil.isSafe(x,y,maze,sol,5)){

					sol[x][y] = 1;

					if(solvePuz(maze,x,y-1,endx,endy,status)) return true;

					else if(solvePuz(maze,x,y+1,endx,endy,status)) return true;

					else if(solvePuz(maze,x-1,y,endx,endy,status)) return true;

					else if(solvePuz(maze,x+1,y,endx,endy,status)) return true;

					else{
					sol[x][y] = 0;
					status = false;
					}

				}
				//status = false;

				}


return false;
  	  }

}

//PS - This is just a solution not the optimum solution
