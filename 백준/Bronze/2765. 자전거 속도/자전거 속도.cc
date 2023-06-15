#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = 3.1415927;
const double FEET_PER_MILE = 5280;
const double INCHES_PER_FOOT = 12;
const double SECONDS_PER_HOUR = 3600;
const double METERS_PER_MILE = 1609.34;

int main()
{
  int trip = 1;
  double diameter, rotation, time;

  while (cin >> diameter >> rotation >> time)
  {
    if (rotation == 0)
    {
      break;
    }

    double distance = PI * diameter * rotation / (INCHES_PER_FOOT * FEET_PER_MILE);
    double mph = distance / (time / SECONDS_PER_HOUR);
    double metersPerHour = distance * METERS_PER_MILE;

    cout << "Trip #" << trip << ": " << fixed << setprecision(2) << distance << " " << mph << endl;
    trip++;
  }

  return 0;
}
