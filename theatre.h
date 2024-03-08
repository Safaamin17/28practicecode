//include guard 
#ifndef THEATRE_H
#define THEATRE_H
#include <string>
    using std::string;

#include<array>
    using std::array;

class Seat;

//declare the class 
class Theatre {
    //declar the member variabeles 
    private:
        int theatreNumber;
        //outer array does rows and inner array does seats 
        array<array<Seat, 12>, 15> seatingChart;
                //two deminsional thing which is why outside array has the type of array the inside array is int cuz we are coutnign steats 

        string currentMovie;

    public:
    //5. contructors 
    Theatre();
    explicit Theatre(itn theatreNumber, string currentMovie);

    //6. accescors implement the getters and setters 
    
    int getThatreNumber();
    string  getCurrentMovie();
    //7. memeber functions 
    void assignSeat(int row, int col);
    void releaseSeat(int row , int col);
    bool isSeatAvailible(int row, int col);

     




}
