import java.applet.Applet;
import java.awt.Graphics;

public class SimpleApplet extends Applet { // Class directly extends Applet
    // Called when the applet is initialized
    public void init() {
        System.out.println("Applet is initialized");
    }

    // Called when the applet starts
    public void start() {
        System.out.println("Applet has started");
    }

    // Called to paint/draw graphics
    public void paint(Graphics g) {
        g.drawString("Applet is painted", 50, 50);
    }

    // Called when the applet stops
    public void stop() {
        System.out.println("Applet has stopped");
    }

    // Called when the applet is destroyed
    public void destroy() {
        System.out.println("Applet is destroyed");
    }
}

