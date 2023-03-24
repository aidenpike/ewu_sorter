#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> classTitle;
    std::vector<std::vector<std::string>> edgewoodArray;

    int classAmount;
    int assignmentAmount;
    std::string className = " ";
    std::string assignmentName = " ";

    /*
    Example (2 classes, 2 assignments each):
        classTitle = {"Class 1", "Class 2"};
        edgewoodArray = {"Class 1 Assignment 1", Class 1 Assignment 2}, {"Class 2 Assignment 1", Class 2 Assignment 2}
        
    classTitle[0] (Class 1)
        edgewoodArray[0][0] (Class 1 Assignment 1)
        edgewoodArray[0][1] (Class 1 Assignment 2)
    classTitle[1] (Class 2)
        edgewoodArray[1][0] (Class 2 Assignment 1)
        edgewoodArray[1][1] (Class 2 Assignment 2)
    */

    //Get number of classes
    std::cout << "Enter number of classes: ";
    std::cin >> classAmount;
    std::cin.ignore();
}
