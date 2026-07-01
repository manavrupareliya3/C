/*In digital world colors are specified in RGB format, with values of R, G, and
B varying on integer scale from 0 to 255. Colors are mentioned in
Cyan-Magenta-Yellow-Black (CMYK) format with values of C, M, Y and K varying 
on a real scale from 0.0 to 1.0. Convert RGB color to CMYK as per
formula: - White=Max(red/255,green/255,blue/255) - Cyan=(white - red/255)/white - Magenta=(white - green/255)/white - Yellow=(white - blue/255)/white - Black=1 - white 
Note: if RGB values are all 0, then the CMY values are all 0 and the K value
 is 1.*/

#include<stdio.h>
void main(){

    int r,g,b;
    float temp1,temp2,temp3,c,m,y,k,max,white;

    printf("enter the RGB values from 0 to 255:");
    scanf("%d %d %d" ,&r,&g,&b);

    temp1=(float)r/255;
    temp2=(float)g/255;
    temp3=(float)b/255;

    white=(temp1>temp2)?((temp1>temp3)?(temp1):(temp3)):((temp2>temp3)?(temp2):(temp3));

    c=(white-temp1)/white;
    m=(white-temp2)/white;
    y=(white-temp3)/white;
    k=1-white;

    printf("cmyk= %f , %f , %f , %f" ,c,m,y,k);


}