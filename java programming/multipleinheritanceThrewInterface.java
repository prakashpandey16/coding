public class multipleinheritanceThrewInterface
{
    interface vehicle{
        void start();
        void stop();

    }
    interface enginespec
    {
        void engine();
    }
    
    public static class Car implements vehicle,enginespec
    {
        //override 
        public void start()
        {
            System.out.println("Car start threw start button");
        }
        public void stop()
        {
            System.out.println("Car stop threw stop button");
        }
        public void engine()
        {
            System.out.println("Engine is 1500 cc ");
        }

    }
    public static void main(String[] args) {
        Car honda = new Car();
        honda.start();
        honda.start();
        honda.engine();

    }

{

}}