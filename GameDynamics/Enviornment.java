package GameDynamics;

//the envioronemnt is a low definition grid for now
//will automatically propagate obstacles randomly
//will remain the same for all players 

public class Enviornment {
    public int[][] grid;
    public int gap;         //gap between top and bottom obstacles
    public int speed;       //speed of obstacles
    public int spacing;     //spacing between obstacles
    public int width;
    public int height;



    Enviornment(){
        grid = new int[height][width];
    }



    public void display(){
        //outline the enviornement
        //display obstacles in current envioronment
    }
}



