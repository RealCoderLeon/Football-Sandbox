// Football (Soccor) Project C++
#include <iostream>
#include <string>
#include <fstream>
#include "myLibrary.h"
#include <filesystem>
#include <cstdlib>
#include <ctime>
namespace fs = std::filesystem;
using namespace std;

int Trophy = 0;
string opponent1;
string opponent2;
string OpponentArray[3];
string username , password;
string Player[11];
int PlayerRating[11];
string team; 

bool LoggingIn(){
    string enteredUsername, enteredPassword , user, pass;

    cout << "Enter Username: "; cin >> enteredUsername;
    cout << "Enter Password: "; cin >> enteredPassword;

    ifstream read(enteredUsername + ".txt");
    getline(read, user);
    getline(read, pass);

    if (enteredUsername == user && enteredPassword == pass){
        return 1;
    }
    else{
        return 0;
    }
}

int main (){
srand(time(0));  // seed random generator
int stopPoint = rand() % 3;  // random number between 0 and 2
int matchOutcome1 = rand() % 2;
int matchOutcome2 = rand() % 2;

while (true){
    int choice;

    cout << "\nSelect a choice!\n1: Register\n2: Login\nYour choice: ";
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    if (choice == 1){

    while (true){
    username.clear();
    cout << "Enter a username: "; getline(cin , username);
    if (fs::exists(username + ".txt")){
        cout << "Username Already Taken Try again." << endl;
        continue;
    }
    break;
}  
    

    while(true){ 
    password.clear();
    cout << "Enter a passworrd: "; getline(cin, password);
    if (username == password){
        cout << "Username and password can't be the same. Try Again" << endl;
        continue;
    }
    break;
}

    Account account {username, password};
    string Manager = username;

    int mode_Choice;
    //Rating of the Player with the same index
    /*[0] = GK, [1-4] = Defenders, [5-7] = Midfielders, [8-10] = Forwards*/

    cout << "Club Mode(1)" << endl;
    cin >> mode_Choice;
    if (mode_Choice == 1){

        int team_Choice;
        int invalidOption = 0;
        cout << "Chooce an team: " << endl;
        cout << "Red Kanagroos(1)" << endl;
        cout << "Blue Bangers(2)" << endl;
        cout << "Green United(3)" << endl;
        cout << "Yellow Fellows(4)" << endl;
        cin >> team_Choice;
            if (team_Choice == 1){
                account.setTeamName("Red Kangaroos");
                team = account.getTeam();
                Player[0] = "Mateo Dravnik";     PlayerRating[0] = 87; // GK
                Player[1] = "Paulo Riccioni";    PlayerRating[1] = 82; // DF
                Player[2] = "Darren Holtwick";   PlayerRating[2] = 80; // DF
                Player[3] = "Emil Savovic";      PlayerRating[3] = 79; // DF
                Player[4] = "Hugo Bransford";    PlayerRating[4] = 81; // DF
                Player[5] = "Aiden Crossley";    PlayerRating[5] = 83; // MF
                Player[6] = "Omar Benavi";       PlayerRating[6] = 81; // MF
                Player[7] = "Thiago Murrano";    PlayerRating[7] = 84; // MF
                Player[8] = "Franco Delvasco";   PlayerRating[8] = 86; // FW
                Player[9] = "Myles Harkington";  PlayerRating[9] = 85; // FW
                Player[10] = "Bruno Kradevic";   PlayerRating[10] = 88; // FW
                invalidOption = 0;
            }
            else if (team_Choice == 2){
                account.setTeamName("Blue Bangers");
                team = account.getTeam();
                Player[0] = "Jorge Elbarto";     PlayerRating[0] = 88; // GK
                Player[1] = "Rami Keldari";      PlayerRating[1] = 80; // DF
                Player[2] = "Viktor Osmunov";    PlayerRating[2] = 82; // DF
                Player[3] = "Trent Valrick";     PlayerRating[3] = 79; // DF
                Player[4] = "Marco Deveras";     PlayerRating[4] = 81; // DF
                Player[5] = "Samuel Drakeson";   PlayerRating[5] = 83; // MF
                Player[6] = "Yuto Kamarashi";    PlayerRating[6] = 84; // MF
                Player[7] = "Karim Losano";      PlayerRating[7] = 82; // MF
                Player[8] = "Diego Fustero";     PlayerRating[8] = 87; // FW
                Player[9] = "Antonis Kouraki";   PlayerRating[9] = 85; // FW
                Player[10] = "Marlon Veghardt";  PlayerRating[10] = 86; // FW
                invalidOption = 0;
            }
            else if (team_Choice == 3){
                account.setTeamName("Green United");
                team = account.getTeam();
                Player[0] = "Lucas Vannori";     PlayerRating[0] = 86; // GK
                Player[1] = "Kamil Rozanski";    PlayerRating[1] = 80; // DF
                Player[2] = "Jonas Breckholt";   PlayerRating[2] = 81; // DF
                Player[3] = "Petar Lumbaski";    PlayerRating[3] = 79; // DF
                Player[4] = "Nico Hartfeld";     PlayerRating[4] = 80; // DF
                Player[5] = "Elias Brantor";     PlayerRating[5] = 83; // MF
                Player[6] = "Ivan Velaric";      PlayerRating[6] = 82; // MF
                Player[7] = "Léo Marcondes";     PlayerRating[7] = 84; // MF
                Player[8] = "Silas Roenberg";    PlayerRating[8] = 85; // FW
                Player[9] = "Jiro Tanemura";     PlayerRating[9] = 84; // FW
                Player[10] = "Andrej Rusevich";  PlayerRating[10] = 86; // FW
                invalidOption = 0;
            }
            else if (team_Choice == 4){
                account.setTeamName("Yellow Fellows");
                team = account.getTeam();
                Player[0] = "Stefan Kravets";    PlayerRating[0] = 87; // GK
                Player[1] = "Zain Haldric";      PlayerRating[1] = 81; // DF
                Player[2] = "Dennis Olsmark";    PlayerRating[2] = 80; // DF
                Player[3] = "Jalen Cotwright";   PlayerRating[3] = 78; // DF
                Player[4] = "Callum Freynor";    PlayerRating[4] = 79; // DF
                Player[5] = "Rafael Gorić";      PlayerRating[5] = 83; // MF
                Player[6] = "Leo Armentari";     PlayerRating[6] = 82; // MF
                Player[7] = "Faisal Makrani";    PlayerRating[7] = 81; // MF
                Player[8] = "Johan Trevland";    PlayerRating[8] = 85; // FW
                Player[9] = "Malik Obakara";     PlayerRating[9] = 84; // FW
                Player[10] = "Victor Santrano";  PlayerRating[10] = 86; // FW
                invalidOption = 0;
            }
            else { 
                cout << "Invalid Chocie, Try Again" << endl;
                invalidOption = 1;
                continue;
            }
            
}
            ofstream file;
            file.open(username + ".txt");
            file << username << endl << password << endl << "Team: " << account.getTeam() << endl << "Manager: " << username << endl;
            file << Player[0]<< ": "<< PlayerRating[0] << endl;
            file << Player[1]<< ": "<< PlayerRating[1] << endl;
            file << Player[2]<< ": " << PlayerRating[2]<< endl;
            file << Player[3]<< ": " << PlayerRating[3]<< endl;
            file << Player[4]<< ": " << PlayerRating[4]<< endl;
            file << Player[5]<< ": " << PlayerRating[5]<< endl;
            file << Player[6]<< ": " << PlayerRating[6]<< endl;
            file << Player[7]<< ": "<< PlayerRating[7]<< endl;
            file << Player[8]<< ": "<< PlayerRating[8]<< endl;
            file << Player[9]<< ": "<< PlayerRating[9]<< endl;
            file << Player[10]<< ": " << PlayerRating[10];       
        continue;
        }
   



else if (choice == 2){
    bool status = LoggingIn();
    if (!status){
        cout << "Incorrect Information, please try again";
        main();
        system("PAUSE");
        return 0;
    }
    else{
        while (true){
        if (team == "Red Kangaroos") {

        if (team == "Red Kangaroos") {
    OpponentArray[0] = "Blue Bangers";
    OpponentArray[1] = "Green United";
    OpponentArray[2] = "Yellow Fellows";
}
else if (team == "Blue Bangers") {
    OpponentArray[0] = "Red Kangaroos";
    OpponentArray[1] = "Green United";
    OpponentArray[2] = "Yellow Fellows";
}
else if (team == "Green United") {
    OpponentArray[0] = "Red Kangaroos";
    OpponentArray[1] = "Blue Bangers";
    OpponentArray[2] = "Yellow Fellows";
}
else if (team == "Yellow Fellows") {
    OpponentArray[0] = "Red Kangaroos";
    OpponentArray[1] = "Blue Bangers";
    OpponentArray[2] = "Green United";
}

        cout << "Log In Successfull!" << endl;
        cout << "\n--Dashboard--" << endl;
        cout << "Enter a Tournament(1)";
        cout << "\nLog Out -->(2)" << endl;
        cout << "Choose: ";
        int dashboardChoice;
        cin >> dashboardChoice;

        switch (dashboardChoice)
        {
    
    case 1: {
    int stopPoint = rand() % 3;  // random starting opponent index
    opponent1 = OpponentArray[stopPoint];
    opponent2 = OpponentArray[(stopPoint + 1) % 3];  // wrap around with %

    cout << team << " vs " << opponent1 << endl;
    system("pause");

    int matchOutcome1 = rand() % 2;  // generate now
    if (matchOutcome1 == 0) {
        cout << "You Won" << endl;
        system("pause");

        cout << team << " vs " << opponent2 << endl;
        system("pause");

        int matchOutcome2 = rand() % 2;  // generate again
        if (matchOutcome2 == 0) {
            cout << "You Won" << endl;
            system("pause");
            cout << "You Won the tournament" << endl;
        } else {
            cout << "You Lost" << endl;
        }
    } else {
        cout << "You Lost" << endl;
    }

    system("pause");
    break;
}        return 0;
    case 2:
        main();
        return 0;
    default:
        return 0;
        }
        
        }
    }
}
continue;
}
}
return 0;
} 
