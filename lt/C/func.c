#include<stdio.h>
#include<stdlib.h>

int increase( );
int main (int argc, char *argv[ ])
{
printf ("%d\n", increase ( ));
printf ("%d\n", increase ( ));
printf ("%d\n", increase ( ));
printf ("%d\n", increase ( ));
return 0;
}
int increase ( )
{
static int soHang = 0;
soHang++;
return soHang;
}