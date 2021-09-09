#include <stdio.h>
#include <stdlib.h>

/* month_day function's prototype*/
void month_day(int year, int yearday, int *pmonth, int *pday);

int daytab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

char* months[12]= {
    "Jan",
    "Feb",
    "Mar",
    "Apr",
    "May",
    "Jun",
    "Jul",
    "Aug",
    "Sep",
    "Oct",
    "Nov",
    "Dec"
};


int main(int argc, char **argv) {
    
    if(argc < 3) {
        printf("You have to send two parameters");
        return 1;
    }else if(argv[1] == "0"||argv[2] == "0"){
        printf("Invalid arguments");
        return 1;
    }

    int year = atoi(argv[1]),year_day = atoi(argv[2]);
    int month, day;

    if(year_day == 0 || year_day > 366){
        printf("Invalid year_day");
        return 0;
    }



    month_day(year,year_day,&month,&day);

    if (day<9&& day != 0)
    {
        printf("%s 0%d, %d",months[month],day,year);
    }else
    {
        printf("%s %d, %d",months[month],day,year);
    }

}

void month_day(int year, int yearday, int *pmonth, int *pday){
    
    int leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    int suma, lim_inf = 0,lim_sup; 

    for (int i = 1; i < 13; i++)
    {   
        suma+= daytab[leap][i];
        if(yearday >= lim_inf && yearday <= suma){
            *pmonth = i -1; 
            *pday = yearday -lim_inf;
            i = 20;
        }else
        {
            lim_inf = suma;
        }
        
    }

}
