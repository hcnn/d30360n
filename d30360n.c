#include "d30360n.h"

double d30360n(int y1, int m1, int d1, 
               int y2, int m2, int d2)
{
    int diff_days = 0;
    diff_days += (360 * (y2 - y1));
    diff_days += ( 30 * (m2 - m1));
    
    diff_days += (d2 == 31 ? (d1 < 30 ? 32 : 30) : d2);
    diff_days -= (d1 > 30 ? 30 : d1);

    if( diff_days < 0){
        fprintf(stderr, "Newer date y2-m2-d2 is older than previous date y1-m1-d1."); 
        exit(-1); 
    }else if(diff_days == 0){
        return 0e0;
    }else{
        return (double)(diff_days) / 360e0;
    }
}
