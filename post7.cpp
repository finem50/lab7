//This program displays the days of a month
//Day 0: Sunday, Day 1: Monday, Day 2: Tuesday
//Day 3: Wednesday, Day 4: Thursday, Day 5: Friday
//Day 6: Saturday

#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

void display_month(int n_days, int start_day);
void get_tabs(int start_day);

int main(){

  int n_days, start_day, cal_year;
  ofstream out_s;
  char input_file[15];

  cout << "Enter the name of the output file: \n";
  cin >> input_file;

  cout << "Enter the year for which you wish to generate the calendar: \n";
  cin >> cal_year;

  cout << "Enter the day of the week that January first is on: \n";
  cin >> start_day;

  out_s.open(input_file);

  display_month(n_days, start_day);

  cout << endl;
  return 0;
}

void display_month(int n_days, int start_day){

  cout << "Sun\tMon\tTue\tWed\tThr\tFri\tSat\n";
  get_tabs(start_day);

  for(int j=1; j<=n_days; j++){

    if(j%7==0){
      cout << endl;
    }

    cout << j << "\t";
  }

}

void get_tabs(int start_day){

  switch (start_day){

    case 1:
      for(int i=0; i<start_day; i++)
        cout << "\t";
        break;

    case 2:
      for(int i=1; i<start_day; i++)
      cout << "\t";
      break;

    case 3:
      for(int i=2; i<start_day; i++)
      cout << "\t";
      break;

    case 4:
      for(int i=3; i<start_day; i++)
      cout << "\t";
      break;

    case 5:
      for(int i=3; i<start_day; i++)
      cout << "\t";
      break;

    case 6:
      for(int i=3; i<start_day; i++)
      cout << "\t";
      break;

    case 7:
      for(int i=3; i<start_day; i++)
      cout << "\t";
      break;
  }

}
