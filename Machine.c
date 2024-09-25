#include <stdio.h>
#include <math.h>

/* defining ingredient quantities and prices for each coffee type*/

#define espresso_beans 8
#define espresso_water 30
#define espresso_milk 0
#define espresso_choco_syrup 0
#define espresso_price 3.5

#define cappuccino_beans 8
#define cappuccino_water 30
#define cappuccino_milk 70
#define cappuccino_choco_syrup 0
#define cappuccino_price 4.5

#define mocha_beans 8
#define mocha_water 39
#define mocha_milk 160
#define mocha_choco_syrup 10
#define mocha_price 5.5

#define low_threshold_beans 8
#define low_threshold_water 30
#define low_threshold_milk 30
#define low_threshold_choco_syrup 10

float total_amount = 0.0;

void checkthreshold (int beans, int water, int milk, int choco_syrup);
void makecoffee (char type);



