import greenfoot.*;  // (World, Actor, GreenfootImage, Greenfoot and MouseInfo)

/**
 * Write a description of class Score here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Score extends Actor
{
    /**
     * Act - do whatever the Score wants to do. This method is called whenever
     * the 'Act' or 'Run' button gets pressed in the environment.
     */
    static int banana = 0;
    public void act() 
    {
        // Add your action code here.
        GreenfootImage image =new GreenfootImage("Jumlah banana = "+banana, 36,Color.RED, null);
        setImage (image);
    }    
}
