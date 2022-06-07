#include <iostream>
using namespace std;


class Seminar{
    int time;
    public:
      Seminar()        //Function 1
      {
        time = 30;
        cout << "Seminar starts now" << endl;
      }
      void lecture()        //Function 2
      {
        cout << "Lectures in the seminar on" << endl;
      }
      Seminar(int duration)        //Function 3
      {
        time = duration;
        cout << "Seminar starts now" << endl;
      }
      ~Seminar()        //Function 4
      {
        cout << "Thanks" << endl;
      }
};

int main(){
  
  Seminar();
  Seminar(15);
}


//b. In Object Oriented Programming, what is Function 4 referred as and when does it get invoked/called?
//It is used in order to review the class one last time before the class is cleaned by the same destructor.


//c. In Object Oriented Programming, which concept is illustrated by Function 1 and Function 3 together?
//The function 1 is used to start the class by a default constructor and initialize the variable that later will be replaced
//The function 3 is used to replace the time value by a new value that is introduced by the user.