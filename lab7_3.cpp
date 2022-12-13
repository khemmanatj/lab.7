int adiff(int x,int y)
    {
    int a,b;
    int z=abs(y-x);
      a= z%360;
      if ( a<=180  ){
         b = a ;
      }else{
         b = 360-a;
      }
      
      
       return b ;
       }