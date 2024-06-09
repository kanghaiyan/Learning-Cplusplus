/*
 Suppose you want to retrieve the current system date and time, either as a local
 time or as a Coordinated Universal Time (UTC). Following is the example to
 achieve the same:
*/

#include <iostream>
#include <ctime>

using namespace std;

int main( ){
    // current date/time based on current system
    time_t now = time(0);

    // Convert now to String form
    char* dt = ctime(&now);

    cout << "The local date and time is: "<< dt << endl;

    // convert now to tm struct for UTC
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The UTC date and time is:"<< dt << endl;
}
