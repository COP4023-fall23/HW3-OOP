/*
In this file you must create your class and prototype your public functions.
*/
#include <string>
#include <iostream>

using namespace std;

struct ClientInfo {
    string client_name;   // This variable stores the name of the client.
    string ssn;           // This variable stores the SSN of the client.
    double bank_account;       // This variable stores the bank account of the client.
    double balance;            // This variable stores the actual balance in the client's account.
};

class Bank {
private:
    int num_clients;   // This variable stores the number of clients.
    Client* client_info; // A pointer that points to a dynamic array of Client Type.

public: 
    Bank(string file_name, int num_client);
    Bank();
    ~Bank();

};

class Client
{ 
    private:
        //define your private members here
        ClientInfo* client_inf;
        int num_clients;

    public:
        //define your public members here
        Client(){};
        Client(string file_name, int num_clients);
        ~Client();
        
        void set_client_info(string fileName);
        ClientInfo* get_client_info();
        double deposit(int account_num,double amount);
        void saving_info(string file_name);
        double withdraw(int account_num, double withdraw);
        void find_client(string name);

};
