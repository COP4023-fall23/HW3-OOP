#include <iostream>
#include <string>
#include <fstream>
#include "Client.h"
//inlcude all needed libraries


using namespace std;


int main()
{
    int num_clients = 0;
    string name, file_name = "client_info.txt";
    //Define an instance of the class.
    Client client;
    //Use the defined constructor to initialize you private members.
    Client Client(file_name, num_clients);
    // Use the deposit function.
    client.deposit(2, 1000.00);
    // Use the withdraw function.
    client.withdraw(2, 500.00);
    // Use the saving_info function.
    client.saving_info(file_name);
    // use find_client
    client.find_client(name);
    // Create a second object and use the deep copy constructor to make a copy of you first object.
    
}
