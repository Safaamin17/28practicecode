//8. inclduign the header file
#include "theatre.h"
#include <string>
    using std::string;

#include<array>
    using std::array;

    //5. contructors 
    Theatre();
    explicit Theatre(itn theatreNumber, string currentMovie);

    //6. accescors implement the getters and setters 
    
    int Theatre::getThatreNumber();{
        return theatreNumber()

    }
    string  Theatre::getCurrentMovie();{

    }
    //7. memeber functions 
    void assignSeat(int row, int col);
    void releaseSeat(int row , int col);
    bool isSeatAvailible(int row, int col);
