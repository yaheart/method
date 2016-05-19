#include <iostream>

using namespace std;

int main()
{
   void swap1( int,int );
   void swap2( int*,int* );
   void swap3( int&,int& );

    int x=3,y=5;
    swap1( x, y );
    cout << x << "," << y << endl;
    int a=3,b=5;
    swap2( &a,&b );
    cout << a << "," << b << endl;
    int c=3,d=5;
    swap3( c,d );
    cout << c << "," << d << endl;
    return 0;
}
 void swap1 ( int p,int q )
    { int t=p;
          p=q;
          q=t;

    return;
    }
void swap2 ( int*p,int*q )
    { int t=*p;
          *p=*q;
          *q=t;
      return ;
    }
void swap3 ( int &p,int &q )
    { int t=p;
          p=q;
          q=t;

    return;
    }
