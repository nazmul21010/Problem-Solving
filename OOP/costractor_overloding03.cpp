# include <iostream >
# include <cstdio > 
using namespace std;
class date
{
int day , month , year ;
public :
date ( char *str );
date (int m, int d, int y)
{
day = d;
month = m;
year = y;
}
void show ()
{
cout << month << day <<endl;
cout << year<<endl ;
}
};
date :: date ( char *str )
{
sscanf (str , "%d%*c%d%*c%d", &month , &day , & year );
}
int main ()
{
// construct date object using string
date sdate (" 12/31/99 ");
// construct date object using integers
date idate (12 , 31 , 99) ;
sdate . show ();
idate . show ();
return 0;
}