public class thisKeyword {
    public class student{
        String name;
        private int rno;
        double percent;
        
        public void set(int rno)
        {
            this.rno = rno; // this yeh decide karta hai ki yaah jo rno hai wah par class ke rno ki baat ho rahi hai na ki arguement wale ki

        }
        public int get()
        {
            return rno;
        }


    }
    
}
