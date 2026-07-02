#include <iostream>
#include <math.h>

double  pos(double y1,double x1) {
    
 double pos = atan2(y1,x1) * (180/3.1415) ;

return pos;

}


int main() {


int pos1 = 8888;
std::cout <<"the angle position is:" <<  pos(7.5,-4.5) << '\n';
return 0;

}
