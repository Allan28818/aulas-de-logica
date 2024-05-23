#include <stdio.h>

typedef struct DateProps {
  int day;
  int month;
  int year;
} dateProps;

dateProps addDays(dateProps date, int daysToAdd) {
  date.day += daysToAdd;

  if(date.day > 30) {
    date.month += date.day / 30;
    date.day = date.day % 30;     
    if(date.month > 12) {
      date.year += date.month / 12;
      date.month = date.month % 12;
    }
  }

  return date;
}

int main() {
  dateProps date;

  date.day = 29;
  date.month = 12;
  date.year = 2000;

  dateProps newDate = addDays(date, 4);

  printf("Dia %d\n", newDate.day);
  printf("Mes %d\n", newDate.month);
  printf("Ano %d\n", newDate.year);

  return 0;
}