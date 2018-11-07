#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;
double percentage(float mark, float totalmark){
    double results = mark / totalmark * 100;
    return results;
  }
  void joke (string name){
      cout << "\nhello " <<name <<" What did the five fingers say to the face?\n";
      cout << "Slap!!";
  }
  int cfunc(int number){
      cout << endl;
      ++number;
      return number;
  }
int main() {
    cout << "Welcome to the function machine!" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Enter a number to select the program you want to run:" << endl;
    cout << endl;
    cout << "1: Calculate your grade on a test" << endl;
    cout << "2: Tell me a joke" << endl;
    cout << "3: Count to 10" << endl;
    cout << "Any other key: Exit" << endl;

    int selection;
    cin >> selection;

    if (cin.fail() || selection < 1 || selection > 3) {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
    }

    if(selection == 1) {
        float marksReceived = 0;
        float totalMarksAvailable = 0;
        double gradePercentage = 0;

        cout << "\nPlease input the score received on the your test\n";//have user input the mark given then input the best mark that could be given
        cin >> marksReceived;
        cout << "\nPlease input what the test was out of\n";
        cin >> totalMarksAvailable; cout << endl;// Read in 2 integer values 

        gradePercentage = percentage(marksReceived, totalMarksAvailable);
        /* 
           Pass the integer values to a function. 
           The function should calculates the grade
           as a percentage out of 100 and return as
           as a double
        */


        cout << "You achieved a grade of: " << gradePercentage << "%" << endl;
    } else if(selection == 2) {
        string name;
        cout << "what is your name?";// Ask the user for their name
        cin >>name;
        joke(name);
        // Call a function that tells them a joke
        // The function should not return a value


    } else {
        int count = 0;

        // Replace the while loop with a for loop
        for(int a=0;a<10;++a) {
            // Call a function here to increase the count
            count=cfunc(count);

            cout << count << " ";
        }
    }

    return 0;
}