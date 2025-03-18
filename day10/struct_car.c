//structures used in real life
#include<stdio.h>
struct Car{
    char Brand[100];
    char Model[100];
    int Year;
    char Cost[100];
};
int main(){
    struct Car car1={"Mahindra",    "Scorpio N", 2025, "₹13.99 - 24.89 Lakh"};
    struct Car car2={"Hyundai",      "Creta",    2025, "₹11.11 - 20.50 Lakh"};
    struct Car car3={"Mahindra",     "Thar",     2025, "₹11.50 - 17.60 Lakh"};
    struct Car car4={"Toyota",       "Fortuner", 2025, "₹33.78 - 51.94 Lakh"};
    struct Car car5={"Maruti Suzuki","Ertiga",   2025,  "₹8.84 - 13.13 Lakh"};

    printf("%s %s %d %s\n",car1.Brand,car1.Model,car1.Year,car1.Cost);
    printf("%s %s %d %s\n",car2.Brand,car2.Model,car2.Year,car2.Cost);
    printf("%s %s %d %s\n",car3.Brand,car3.Model,car3.Year,car3.Cost);
    printf("%s %s %d %s\n",car4.Brand,car4.Model,car4.Year,car4.Cost);
    printf("%s %s %d %s\n",car5.Brand,car5.Model,car5.Year,car5.Cost);

    return 0;


}
