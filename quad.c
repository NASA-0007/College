#include <math.h>
#include <stdio.h>
void main() {
    double a, b, c, discriminant, root1, root2;
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);

} 
