#include <stdio.h>

struct duration {
    int y;
    int m;
    int d;
};
typedef struct duration Time;

int difference(int y, int m, int d){
    // slightly adapted from https://www.geeksforgeeks.org/find-number-of-days-between-two-given-dates/
    int i,total = 0;
    int days[] = { 31, 28, 31, 30, 31, 30,
       31, 31, 30, 31, 30, 31 };
    total += (2566-y)*365;
    for (i = 0; i < m - 1; i++)
        total += days[i];
    total += d;
    return total;
}

Time ymd(int days){
    Time t;
    t.y = days / 365;
    // too lazy lol
    t.m = (days-365*t.y)/30;
    t.d = (days-365*t.y-30*t.m);
    return t;
}

int main()
{
    int i;
    struct date
    {
        int day;
        int month;
        int year;
    };
    struct student
    {
        int std_id;
        char std_name[40];
        struct date std_birth;
        struct date std_checkin;
        int room;
    };

    typedef struct student STD;
    STD stdrecord[5] = { {10001, "Chris Hemsworth",11, 12, 2552, 3,5,2560, 4},
        {10002, "Tom Cruise",3,4,2552,6,5,2555, 4},
        {10003, "Taylor Swift",13,12, 2552, 1,5, 2560, 2},
        {10004, "Hugh Grant", 9,9,2551, 1,5, 2560, 1},
        {10005, "Kristen Stewart", 9,4, 2552,7,5,2560, 1}
    };

    for(i=0 ; i<5 ; i++)
    {
        int d = difference(stdrecord[i].std_birth.year,stdrecord[i].std_birth.month,stdrecord[i].std_birth.day);
        int y = ymd(d).y;
        int m = ymd(d).m;
        int ds = ymd(d).d;
        printf("%d ",stdrecord[i].std_id);
        printf("%-15s ",stdrecord[i].std_name);
        printf("Age: %.2dY%.2dM%.2dD ",y,m,ds);
        printf("%2d ",stdrecord[i].std_birth.day);
        printf("%2d ",stdrecord[i].std_birth.month);
        printf("%4d ",stdrecord[i].std_birth.year);
        printf("\n");
    }
}
