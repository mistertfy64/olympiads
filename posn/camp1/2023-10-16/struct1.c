#include <stdio.h>



int main()
{
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

    // sort here
    int i =0;
    int k=0,l,latest=0, length = sizeof(stdrecord)/sizeof(stdrecord[0]);
    for (i = 1; i < length; i++){
        if(stdrecord[i].std_checkin.year>stdrecord[latest].std_checkin.year){

            latest = i;
        } else if (stdrecord[i].std_checkin.year==stdrecord[latest].std_checkin.year){
            if (stdrecord[i].std_checkin.month>stdrecord[latest].std_checkin.month){

                latest = i;
            } else if (stdrecord[i].std_checkin.month==stdrecord[latest].std_checkin.month){
                if (stdrecord[i].std_checkin.day>stdrecord[latest].std_checkin.day){

                    latest = i;
                } else if (stdrecord[i].std_checkin.day==stdrecord[latest].std_checkin.day){

                    latest = i;
                }
            }
        }
    }

    //for (l = 0; l < k+1 && latest[k]!=-1;l++;)
    printf("%s (Check-in: %d-%.2d-%.2d)\n",stdrecord[latest].std_name,stdrecord[latest].std_checkin.year-543,stdrecord[latest].std_checkin.month,stdrecord[latest].std_checkin.day);
    return 0;
}
