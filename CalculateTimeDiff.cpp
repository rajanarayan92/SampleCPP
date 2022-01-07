#include <iostream>
#include <chrono>
#include <thread>

class timer
{
    // alias our types for simplicity
    using clock             = std::chrono::system_clock;
    using time_point_type   = std::chrono::time_point < clock, std::chrono::milliseconds > ;
public:
    // default constructor that stores the start time
    timer()
    {
        auto now = std::chrono::system_clock::now();
        // Since you want to traffic at millisecond precision, it would be good to go ahead and covert to it in the time_point
        auto now_ms = std::chrono::time_point_cast<std::chrono::milliseconds>(now);
        // now_ms is a time_point, based on system_clock, but with the precision of milliseconds instead of whatever precision your system_clock has.
        
        
         auto value = now_ms.time_since_epoch();
         start_l = value.count();
    }

    // gets the time elapsed from construction.
    long /*milliseconds*/ getTimePassed()
    {
        // get the new time
        //auto end = clock::now();
        //auto end  = std::chrono::time_point_cast<std::chrono::milliseconds>(clock::now());
        auto e1 = std::chrono::system_clock::now();
        auto end = std::chrono::time_point_cast<std::chrono::milliseconds>(e1);
        
        // convert start_l to time_point_type
        std::chrono::milliseconds dur(start_l);
        std::chrono::time_point<std::chrono::system_clock,std::chrono::milliseconds> dt_Start(dur);

        // return the difference of the times
        return (end - dt_Start).count();
    }

private:
    long start_l;
};

int main()
{
    timer t;

    std::this_thread::sleep_for(std::chrono::seconds(5));

    std::cout << t.getTimePassed();

}
