#include<stdio.h>
//Q1.
/*int main()
{
    int a,b,c;
    printf("Enter the three integers :");
    scanf("%d%d%d",&a,&b,&c);
    float Average = (float)(a+b+c)/3;
    printf("Average of three numbers = %f" ,Average);
    return 0;

}

//Q2 circle ki pridhi = 2*3.14f*r
int main()
{
   int R ;
   printf("Enter the R :");
   scanf("%d",&R);
   float C= (float)(2*(3.14f)*R);
   printf("circumference of circle = %f" , C);
   return 0;

}

//Q3. Simple Interest = p*t*r/100
int main()
{
    int P;
    float t,r;
    printf("Enter Principle , Rate and Time");
    scanf("%d%f%f", &P,&t,&r);
    float SI = (P*t*r)/100.0;
    printf("Simple Interest = %f",SI);
    return 0;


}

// Q4 Ghnabh Ka Aayatn = height * length * width
int main()
{
    int l,b,h;
    printf("Enter l , b,h :");
    scanf("%d%d%d",&l,&b,&h);
    float volumeOfCuboid = (float)(l*b*h);
    printf("Volume of Cuboide = %f" ,volumeOfCuboid);
    return 0;
}
*/
//Q5
// 12 bananas = price 50
// 1 bananas = price 50/12 =4.1..
int main()
{
   float CP, SP,p;
   printf("Enter Selling price of 12 bananas :");
   scanf("%f",&SP);
   printf("Enter Cost Price of 12 bananas:");
   scanf("%f",&CP);
   printf("prfit or loss = %f" , (SP-CP)/12*25);

   return 0;
}