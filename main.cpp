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
    
    //Class name, number of assignments, assignment name(s)
    for (int x = 0; x < classAmount; x++){
        std::cout << "Enter name of class " << x + 1 << ": ";
        getline(std::cin, className);

        //Push className into classTitle array
        classTitle.push_back(className);
        
        std::cout << "Enter number of assignments for " << className << ": ";
        std::cin >> assignmentAmount;
        std::cin.ignore();
        edgewoodArray.resize(assignmentAmount);
        
        for (int y = 0; y < assignmentAmount; y++){
            std::cout << "Enter name of assignment " << y + 1 << ": ";
            getline(std::cin, assignmentName);

            //Push assignmentName into the index of x
            edgewoodArray[x].push_back(assignmentName);
        }
    }
    
    //Output all
    for (int x = 0; x < edgewoodArray.size(); x++){
        //Output title based on index of x
        std::cout << classTitle[x] << "\n";

        
        for (int y = 0; y < edgewoodArray[x].size(); y++){
            //Output assignment name based on index x for the instance position (Class) and index y for the assignment position
            std::cout << "\t" << edgewoodArray[x][y] << "\n";
        }
    }
}
