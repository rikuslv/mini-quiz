#include <iostream>
#include <string>


using namespace std;



int main(){  
    int score = 0;
    string answer;

    cout << "mini test about minicrafft" << endl;
    
    //first question
    cout << "Whe minicraft relised?" << endl;
    cout << "a) 2011\nb) 2010\nc) 1002\n";
    cout << "Your answer: ";
    cin >> answer;

    if(answer == "a" || answer == "A"){
        score++;
        cout << "nice\n";
    }
    else{
        cout << "nop\n";
    }


    //second qustion
    cout << "Endermen can be damaged in several ways. Which of the following has been made up?\n ";
    cout << "a)potato,\n b)mental attack,\n c) rain";
    cin >> answer;

    if(answer == "c" || answer == "C"){
        score++;
        cout << "good\n";
    }
    else{
        cout << ":(\n";
    }

    //third question
    cout << "When you first spawn in the game what dimension do you start in?\n";
    cout << "a) overworld\n b) spawnpointn\n c) tiemlend\n";
    cin >> answer;

    if(answer == "a" || answer == "A"){
        score++;
        cout << "correct\n";
    }
    else{
        cout << "incorect\n";
    }


    cout << "\nTest results: " << score << "/3!\n";

    return 0;
}
