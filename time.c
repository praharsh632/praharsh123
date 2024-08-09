#include<stdio.h>
struct time
{
int hour;
int minute;
int second;
};
struct time update(struct time newClock);
int main()
{
struct time clock;
printf("Enter hours : ");
scanf("%d", &clock.hour);
printf("Enter minutes : ");
scanf("%d", &clock.minute);
printf("Enter seconds : ");
scanf("%d", &clock.second);
printf("Display of time is : \n");
printf("%02d : %02d : %02d\n", clock.hour, clock.minute, clock.second);
printf("\nClock time after one second\n");
clock = update(clock);
printf("%02d : %02d : %02d\n", clock.hour, clock.minute, clock.second);
}
struct time update(struct time newClock)
{
newClock.second = newClock.second + 1;
if (newClock.second == 60)
{
newClock.second = 0;
newClock.minute = newClock.minute + 1;
if(newClock.minute == 60)
{
newClock.minute = 0;
newClock.hour = newClock.hour + 1;
if(newClock.hour == 24)
{
newClock.hour = 0;
}
else
{
newClock.hour = newClock.hour;
}
}
else
{
newClock.minute = newClock.minute;
}
}
else
{
newClock.second = newClock.second;
}
return newClock;
}
