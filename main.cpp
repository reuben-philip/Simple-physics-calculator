#include <iostream>
using namespace std;

int main()
{
    int acceleration = 0;
    int mass = 0; 
    int density = 0; 
    int time =  0; 
    int initial_velocity = 0; 
    int final_velocity = 0;
    int distance = 0;
    int answer = 0;
    char userinput;

   cout << "Welcome to the physics calculator\n" << "What formula would you like to use?\n"<<"a)Average Speed Formula\nb)Acceleration Formula\nc)Density Formula\nd)Newton's Second Law\ne)Power Formula\n Enter a letter:";
   cin >> userinput;

    switch(userinput){
        case 'a':
            cout << "Total distance traveled:";
            cin >> distance; 
            cout << "Total time take:";
            cin >> time; 

            answer+= distance/time;
            
            cout << "The answer is: " << answer;

            break;
        
        case 'b':
            cout << "Initial Velocity:";
            cin >> initial_velocity; 
            cout << "Final Velocity"; 
            cin >> final_velocity;
            cout << "Time taken:";
            cin >> time;

            answer+= (final_velocity - initial_velocity)/time;
            
            cout << "The answer is: " << answer;

            break;
        
        case 'c':
            cout << "Mass of the object:"; 
            cin >> mass; 
            cout << "Time:";
            cin >> time;
            
            answer+= mass/time; 

            cout << "The answer is: " << answer;

            break;
        
        case 'd':
            cout << "Mass of the body";
            cin >> mass; 
            cout << "Acceleration";
            cin >> acceleration;
            
            answer+= mass * acceleration;

            cout << "The answer is: " << answer;

            break;
        
        case 'e':
            cout << "Work done:"; 
            cin >> acceleration; 
            cout << "Time taken:"; 
            cin >> time; 

            answer+= acceleration/time; 

            cout << "The answer is: " << answer;

            break;

        default: 
            cout << "Choose a letter that is provided and make sure it is lower case";
    }

   return 0;
}
