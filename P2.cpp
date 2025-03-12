/* In this C++ program, we have a class that contains two arrays with 10 elements each: one for ages and one for names. 
   The "Average" function, which is located inside the class, calculates the average of the ages.
*/

#include <iostream>
using namespace std;

class PersonalInfo {
    private:
        // Private members cannot be accessed (or viewed) from outside the class
        string names[10] = {"Jack", "Mike", "Martin", "Leonard", "Jeff", "Alex", "Sarah", "Adam", "Steve", "Harry"};
        int ages[10] = {12, 32, 45, 67, 34, 1, 54, 37, 15, 9};

    public:
        // Public members can be accessed from outside the class
        double Average() {
            int sum = 0;    // Initialize sum to 0
            for (int counter = 0; counter < 10; counter++) {
                sum += ages[counter];
            }
            double avg = (double) sum / 10; // Calculate the average
            return avg;
        }
};

int main() {
    PersonalInfo p1;
    double avg = p1.Average();
    cout << "The average of the ages is: " << avg << endl;
    return 0;
}
