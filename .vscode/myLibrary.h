#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string username;
    string password;
    string team;
    string league;
public:
    Account (string enteredUsername, string enteredPassword)
        : username{enteredUsername}, password{enteredPassword} {}

    string getUsername () const {
        return username;
    }
    string getPassword () const {
        return password;
    }
    void setTeamName (string enteredTeamName){
        team = enteredTeamName;
    }

    string getTeam () const {
        return team;
    }
};
