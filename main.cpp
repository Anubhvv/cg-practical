

	}
for(int i=0;i<3;++i)
{
     for(int j=0;j<3;++j)
{

    A[i][j]=result[i][j];
    if(f!=0)
    cout<<A[i][j]<<" ";

}
cout<<endl;
}

}
void refx(double A[3][3],int n)
{

    double t[3][3]={{1,0,0},
                    {0,-1,0

                    },
                    {
                        0,0,1
                    }
    };
       double result[3][3];
       m(t,A,result);
       if(n>1)
        line(A[0][0],A[1][0],A[0][1],A[1][1]);
         if(n>2)
         {

           line(A[0][0],A[1][0],A[0][2],A[1][2]);
            line(A[0][1],A[1][1],A[0][2],A[1][2]);}



    };

void refy(double A[3][3],int n)
{
    double t[3][3]={{-1,0,0},
                    {0,1,0

                    },
                    {
                        0,0,1
                    }
    };

       double result[3][3];
       m(t,A,result);


       if(n>1)
        line(A[0][0],A[1][0],A[0][1],A[1][1]);
         if(n>2)
         {

           line(A[0][0],A[1][0],A[0][2],A[1][2]);
            line(A[0][1],A[1][1],A[0][2],A[1][2]);}
    };
void shear(double A[3][3],double Shx,double Shy,int n)
{

     if(n>1)

    m(S,A,result);

    if(n>1)
        line(A[0][0],A[1][0],A[0][1],A[1][1]);
         if(n>2)
         {

           line(A[0][0],A[1][0],A[0][2],A[1][2]);
            line(A[0][1],A[1][1],A[0][2],A[1][2]);}


}
void rot(double A[3][3],double angle,int n)
{
    double cost,sint;
	double result[3][3];
    angle = angle*(3.1415)/180;

      cost=cos(angle);    sint=sin(angle);
       double re[3][3] = {
                        { cost,(-1.0*sint) , 0 },
                        { sint, cost, 0 },
                         { 0, 0, 1 } };
           m(re,A,result);
           if(n>1)
        line(A[0][0],A[1][0],A[0][1],A[1][1]);
         if(n>2)
         {

           line(A[0][0],A[1][0],A[0][2],A[1][2]);
            line(A[0][1],A[1][1],A[0][2],A[1][2]);}


}
void translation(double A[3][3],double tx,double ty,int n)
{
  for(int j=0;j<n;++j)
  {
    for(int i=0;i<2;++i)
    {
        if(i==0)
        A[i][j]=A[i][j]+tx;
        else
            A[i][j]+=ty;
            if(f!=0)
        cout<<A[i][j]<<" ";
    }
    cout<<endl;
  }
        if(n>1)
        line(A[0][0],A[1][0],A[0][1],A[1][1]);
         if(n>2)
         {

           line(A[0][0],A[1][0],A[0][2],A[1][2]);
            line(A[0][1],A[1][1],A[0][2],A[1][2]);}

}
void reff(double e,double c)
{
    f=0;
    double q=(e*e);
    double u[3][3]={ {(1-q)/(1+q),2*e/(1+q) ,-2*c*e/(1+q)},

                  {2*e/(1+q),(q-1)/(1+q),2*c/(1+q)
                  },

              {0,0,1}
    };
    double result[3][3];

     m(u,A,result);
    f=1;
    cout<<A[0][0]<<" "<<A[1][0]<<endl;





   char g='y';
   int v=0;

   while(g=='y'||g=='Y')
   {
       cout<<"Which operation you wanna perform ?"<<endl;
       cout<<" 1. Translation"<<endl;
       cout<<" 2. Rotation"<<endl;
       cout<<" 3. Scaling"<<endl;
       cout<<" 4. Shearing"<<endl;
       cout<<" 5. re
   cin>>n;
for(int j=0;j<n;++j)
    for(int i=0;i<2;++i)
        cin>>A[i][j];



       }
       if(n>1)
        line(A[0][0],A[1][0],A[0][1],A[1][1]);
         if(n>2)
         {

           line(A[0][0],A[1][0],A[0][2],A[1][2]);
            line(A[0][1],A[1][1],A[0][2],A[1][2]);}

       v=1;
       if(y==1)
       { double tx,ty;
       cout<<"enter tx,ty";
       cin>>tx>>ty;
       translation(A,tx,ty,n);
       }
       else if(y==2)
       {
         double angle;
         cout<<"enter angle to rotate:";
         cin>>angle;
        rot(A,angle,n);


       }
       else if(y==3){
        cout<<"enter Sx and Sy:";
        double Sx,Sy;
        cin>>Sx>>Sy;
    scale(A,Sx,Sy,n);

       }
       else if(y==4)
       { cout<<"Enter Shx and Shy :"<<endl;
       double Shx,Shy;
       cin>>Shx>>Shy;
       shear(A,Shx,Shy,n);



       }
       else if(y==5)
       {
           refx(A,n);
       }
       else if(y==6)
       {
          refy(A,n);


       }
       else{
         cout<<"Enter a,b and c:"<<endl;
form further operations on this point?"<<endl;
       cin>>g;
       if(g=='n'||g=='N')
        break;

   }
return 0;

}
