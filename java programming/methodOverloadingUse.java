public class methodOverloadingUse {
    public static class Area
    {
        void calculate_area(int radius)
        {
            double pi = Math.PI;
            double area = (pi * radius * radius);
            System.out.println("The area of square is : "+area);

        }
        void calculate_area(int length,int breadth)
        {
             double area = (length*breadth);
             System.out.println("The area of rectangle is : "+area);
        }
    }
    public static void main(String args[])
    {
      Area obj = new Area();
      // calling area of square
      obj.calculate_area(10);
      // calling area of rectangle
      obj.calculate_area(10,20);


    }


    
}
