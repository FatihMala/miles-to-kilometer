#include <stdio.h>
#include <stdlib.h>

int main()
{
    // burada double'ý  mil veya kilometrenin alabilecegi deger virgüllü olduðundan. Ayný zamanda double yerine flout da kullanabiliriz.
    double miles, km;
    const double f = 1.6093;
    printf("enter miles:");
    scanf("%lf", &miles);
    km=miles*f;
    printf("%.3lf miles is %.3lf km", miles, km);
    return 0;

}
