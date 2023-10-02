/*
Here you will provide the definiton of each member function. Remeber include your class.
*/
#include "Client.h"
#include <iostream>
#include <fstream>

using namespace std;

Client::Client(string file_name, int num_clients)
{
    ifstream inputFile;
    inputFile.open(file_name);

    if(!inputFile)
    {
        cout<<"Error: The path or file does not exist";
        exit(1);
    }

    client_inf = new ClientInfo[num_clients];

    for(int i=0; i<num_clients; i++)
    {
        inputFile >> client_inf[i].client_name >> client_inf[i].ssn >> client_inf[i].bank_account >> client_inf[i].balance;
    }

    inputFile.close();

} //end client constructor

Client::~Client()
{
    delete[] client_inf;

    client_inf = nullptr;

} // end client destructor

void Client::set_client_info(string fileName)
{
    ifstream inputFile(fileName);
        if(!inputFile.is_open())
    {
        cout << "Error: Unable to open file" << endl; 
    }

    string line;
    while(getline(inputFile,line))
    {
        string name;
        string ssn;
        double bankAccount;
        double balance;
        int i;
        
        if (i >= 0)
        {
            client_inf[i].client_name = name;
            client_inf[i].ssn = ssn;
            client_inf[i].bank_account = bankAccount;
            client_inf[i].balance = balance;
        }
    }
}

ClientInfo* Client::get_client_info()
{
    int i;
    return client_inf;
}

double Client::deposit(int account_num, double amount)
{
    int i;
    client_inf[i].balance += amount;

    return client_inf[i].balance;
}

double Client::withdraw(int account_num, double withdraw) 
{
    int i;
    client_inf[i].balance -= withdraw;

    return client_inf[i].balance;
}   

void Client::saving_info(string file_name)
{
    ofstream outputFile;
    outputFile.open(file_name);

    for (int i = 0; i < num_clients; ++i) 
    {
        outputFile << client_inf[i].client_name << " " << client_inf[i].ssn << " " << client_inf[i].bank_account << " " << client_inf[i].balance;
    }
    outputFile.close();
}

void Client::find_client(string name)
{
    int index = -1;
    for(int i=0; i < num_clients; i++)
    {
        if(name == client_inf[i].client_name)
        {
            index = i;
            cout<<"Student was found."<<endl;
            break;
        }
    }

    if(index==-1)
    {
        cout<<"Student was not found."<<endl;
    }
}
