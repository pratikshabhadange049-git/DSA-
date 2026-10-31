# include <iostream>
using namespace std;
class complex{
    private :
    float real;
    float imag;
    public :
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(float r,float i)
    {
        real = r;
        imag = i;
    }
    ~ complex(){}
        void display(void)
        {
            cout<<real<<"+"<<imag<<"i"<<endl;
        }
        complex multi(complex c)
        {
            float r=real*c.real;
            float i=imag*c.imag;
            return complex(r,i);
        }
};
int main(){
   complex c1(2.0,3.0);
   cout<<"complex no is"<<endl;
     c1.display();
   complex c2(5.0,7.0);
   cout<<"complex no is"<<endl;
     c2.display();
     complex c3(3.0,4.0);
    cout<<"complex no is"<<endl;
      c3.display();
    complex c4(6.0,8.0);
    cout<<"complex no is"<<endl;
     c4.display();
    complex multi= c1.multi(c2);
    cout<<"multi is"<<endl;
     multi.display();
   return(0);
}

PS D:\pratiksha> cd "d:\pratiksha\" ; if ($?) { g++ complex.cpp -o complex } ; if ($?) { .\complex }
complex no is
2+3i
complex no is
5+7i
complex no is
3+4i
complex no is
6+8i
multi is
10+21i
