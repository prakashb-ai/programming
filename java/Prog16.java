class Prog16{
    int l,w;
    Prog16(int x,int y){
        l = x;
        w = y;
    }
    void setRect(int x,int y){
        l = x;
        w = y;
    }
    int area(){
        return l*w;
    }
    void print(){
        System.out.println("length ="+l+",width = "+w+"and area="+area());

    }

    public static void main(String args[]){
        Prog16 r = new Prog16(20,15);
        Prog16 r1 = r;
        r1.setRect(40,10);
        r1.print();
    }
}

