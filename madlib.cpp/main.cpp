//
//  main.cpp
//  madlib.cpp
//
//  Created by shawn murray on 10/19/15.
//
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string professor_name, user_name, food, adjective, color, animal;
    int number;

    // Getting professors name
    cout << "Enter your professors name: " << professor_name;
    cin >> professor_name;
    
    // Getting user name
    cout << "What is your name? " << user_name;
    cin >> user_name;
    
    // Getting food object
    cout << "Enter a name of a food: " << food;
    cin >> food;
    
    // Getting a number between a certain value
    cout << "Enter a number between 100 and 120: " << number;
    cin >> number;
    
    // Testing whether the user inputted the necessary values
    if (number < (100) || number > 120) {
        cout << "Please enter a value that is between 100 and 120 again: ";
        cin >> number;
    }
    
    // Getting an adjective
    cout << "Now enter an adjective: " << adjective;
    cin >> adjective;
    
    // Getting a color from the user
    cout << "Enter any color: " << color;
    cin >> color;
    
    // And finally, getting an animal name
    cout << "Enter any animal now: " << animal;
    cin >> animal;
    
    
    // Capitalizing the user_name with an if statement and a for loop
    if (!user_name.empty()) {
        user_name[0] = std::toupper(user_name[0]);
        
        for (std::size_t i = 1; i < user_name.length(); ++i) {
            user_name[i] = std::tolower(user_name[i]);
        }
    }
    
    // Doing the samething here with the professors name
    if (!professor_name.empty()) {
        professor_name[0] = std::toupper(professor_name[0]);
        
        for (std::size_t i = 1; i < professor_name.length(); ++i) {
            professor_name[i] = std::tolower(professor_name[i]);
        }
    }
    
    cout << endl;
    
    // Now we print everything entered from the user as a madlib
    cout << "Dear Professor " << professor_name << "\n";
    cout << endl;
    
    cout << "I am sorry that I am unable to turn in my homework at this time. " <<
            "First, I ate a rotten " << food << ", which made me turn " << color <<
            " and extremely ill. I came down with a fever of " << number <<
            ". Next, my " << adjective << " pet " << animal << " must have smelled the" <<
            " remains of the " << food << " on my homework, because he ate it. "
            "I'm currently rewriting my homework and hope you will accept it late.\n" << endl <<
            "Sincerely,\n" <<
            user_name;
    
    
    //return 0;
}
