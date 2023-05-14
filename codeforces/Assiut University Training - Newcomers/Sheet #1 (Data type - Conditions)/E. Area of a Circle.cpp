    #include <stdio.h>
    #include <math.h>
     
    int main() {
        double R, area;
        double PI = 3.141592653;
     
        scanf("%lf", &R);
     
     
        area = PI * R * R;
     
     
        printf("%.9lf", area);
     
        return 0;
    }