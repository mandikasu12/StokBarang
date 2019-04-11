import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class level1 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class level1 extends World
{

    /**
     * Constructor for objects of class level1.
     * 
     */
    public level1()
    {    
        // Create a new world with 600x400 cells with a cell size of 1x1 pixels.
        super(600, 400, 1); 
        prepare();
    }

    /**
     * Prepare the world for the start of the program.
     * That is: create the initial objects and add them to the world.
     */
    private void prepare()
    {
        turtle turtle = new turtle();
        addObject(turtle,306,203);
        banana banana = new banana();
        addObject(banana,95,117);
        banana banana2 = new banana();
        addObject(banana2,368,115);
        banana banana3 = new banana();
        addObject(banana3,488,221);
        banana banana4 = new banana();
        addObject(banana4,177,230);
        Score score = new Score();
        addObject(score,184,80);
        score.setLocation(131,41);
        Bola bola = new Bola();
        addObject(bola,416,31);
        bola.setRotation(90);
    }
}
