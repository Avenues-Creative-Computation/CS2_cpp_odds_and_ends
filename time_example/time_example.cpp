//this program demonstrates how to use the time methods of the standard library
//sample code from here: http://cplusplus.com/forum/beginner/32329/

#include <ctime>
#include <iostream>
using namespace std;

int main()
{
  //create a new time struct
	time_t t = time(NULL);

  //create a pointer to store the localtime (note that the time object is passed by reference)
	tm* timePtr = localtime(&t);


//access individual members of the tm struct using the arrow operator
  cout << "seconds= " << timePtr->tm_sec << endl;
  cout << "minutes = " << timePtr->tm_min << endl;
  cout << "hours = " << timePtr->tm_hour << endl;
  cout << "day of month = " << timePtr->tm_mday << endl;
  cout << "month of year = " << timePtr->tm_mon << endl;
  cout << "year = " << timePtr->tm_year << endl; // note this will only tell you how many years since 1900
  cout << "weekday = " << timePtr->tm_wday << endl;
  cout << "day of year = " << timePtr->tm_yday << endl;
  cout << "daylight savings = " << timePtr->tm_isdst << endl;
}
