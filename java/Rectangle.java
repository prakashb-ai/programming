class Rectangle{
    double length,width;
    //Rectangle(){}
        Rectangle(double length,double width){
            this.length = length;
            this.width = width;
        }
        void print(){
            System.out.println("l="+length+"w="+width);
        }
        public static void main(String args[]){
            Rectangle r1 = new Rectangle(2,5);
            Rectangle r2 = r1;
            r1.print();
            r2.print();
        }

    
}