class VarArgs{
    static void vaTest(int ...v){
        System.out.println("number of args:"+v.length+"contents:");
        for(int i=0;i<v.length;i++)
            System.out.print(v[i]+"");
            System.out.println();

        }
         public static void main(String args[])
        {
            vaTest(50);
            vaTest(5,10,15,20,25);
            vaTest();
        
    }
}