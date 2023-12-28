#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<vector>

using namespace std;
void mainMenu();
class Management {
public:
    Management() {
        mainMenu();
    }
};


class Details {
public:
    static string name, gender;
    int phoneNo = 0;
    static int age;
    string add = "";
    static int cId; // customer Id
    char arr[100];

    void information() {
        cout << "\n Enter the customer ID:" << endl;
        cin >> cId;
        cout << "\n Enter the name :" << endl;
        cin >> name;
        cout << "\n Enter the age :" << endl;
        cin >> age;
        cout << "\n Gender :" << endl;
        cin >> gender;
        cout << "Your details are saved with us \n" << endl;
    }

    void display() {
        cout << "\n Customer ID:" << cId << endl;
        cout << "\n Name :" << name << endl;
        cout << "\n Age :" << age << endl;
    }
};




int Details::cId;
string Details::name;
string Details::gender;
int Details::age;

vector<Details> ALL_DETAILS;
ofstream file;

class Registration {
public:
    static int choice;
    int choicel;
    int back;
    static float charges;

    void flights() {
        // Your existing code for flight details remains the same
        string flightN[] = { "Dubai","Canada","UK","USA","pakistan","india" };
        for (int a = 0; a < 6; a++) {
            cout << (a + 1) << ".flight to" << flightN[a] << endl;
        }
        cout << "\nWelcome to the Airline!" << endl;
        cout << "press the number of the country of which you want to book the flight:" << endl;
        cin >> choice;
        switch (choice) {
        case 1: {
            cout << "_______________Welcome to Dubai Emirates________________\n" << endl;
            cout << "your comfort is our priority.Enjoy the journey" << endl;
            cout << "Following are the flights \n" << endl;
            cout << "1.DUB - 498" << endl;
            cout << "\t04-12-2023 4:00AM 10hrs Rs=14000" << endl;
            cout << "1.DUB - 658" << endl;
            cout << "\t06-12-2023 8:00AM 10hrs Rs=10000" << endl;
            cout << "1.DUB - 508" << endl;
            cout << "\t07-12-2023 6:00AM 10hrs Rs=19000" << endl;
            cout << "\n Select the flight you want to book :" << endl;
            cin >> choicel;
            if (choicel == 1) {
                charges = 14000;
                cout << "\n You have successfully booked the flight DUB - 498" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else if (choicel == 2) {
                charges = 10000;
                cout << "\n You have successfully booked the flight DUB - 658" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;

            }
            else if (choicel == 3) {
                charges = 19000;
                cout << "\n You have successfully booked the flight DUB - 508" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else {
                cout << "Invalid input,shiftin to the previous menu" << endl;
                flights();
            }
            cout << "press any key to go back to the main menu:" << endl;
            cin >> back;
            if (back == 1) {
                mainMenu();
            }
            else {
                mainMenu();
            }

        }
        case 2: {
            cout << "_______________Welcome to Canadian Airline________________\n" << endl;
            cout << "your comfort is our priority.Enjoy the journey" << endl;
            cout << "Following are the flights \n" << endl;
            cout << "1.CA - 198" << endl;
            cout << "\t09-12-2023 2:00PM 20hrs Rs=34000" << endl;
            cout << "1.CA - 158" << endl;
            cout << "\t11-12-2023 9:00AM 23hrs Rs=29000" << endl;
            cout << "1.CA - 298" << endl;
            cout << "\t14-12-2023 12:00AM 21hrs Rs=40000" << endl;
            cout << "\n Select the flight you want to book :" << endl;
            cin >> choicel;
            if (choicel == 1) {
                charges = 34000;
                cout << "\n You have successfully booked the flight CA - 198" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else if (choicel == 2) {
                charges = 29000;
                cout << "\n You have successfully booked the flight CA - 158" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;

            }
            else if (choicel == 3) {
                charges = 40000;
                cout << "\n You have successfully booked the flight CA - 298" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else {
                cout << "Invalid input,shiftin to the previous menu" << endl;
                flights();
            }
            cout << "press any key to go back to the main menu:" << endl;
            cin >> back;
            if (back == 1) {
                mainMenu();
            }
            else {
                mainMenu();
            }
        }
        case 3: {
            cout << "_______________Welcome to UK Airline________________\n" << endl;
            cout << "your comfort is our priority.Enjoy the journey" << endl;
            cout << "Following are the flights \n" << endl;
            cout << "1.UK - 798" << endl;
            cout << "\t05-12-2023 10:00AM 14hrs Rs=44000" << endl;
            cout << "\n Select the flight you want to book :" << endl;
            cin >> choicel;
            if (choicel == 1) {
                charges = 44000;
                cout << "\n You have successfully booked the flight UK - 798" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else {
                cout << "Invalid input,shiftin to the previous menu" << endl;
                flights();
            }
            cout << "press any key to go back to the main menu:" << endl;
            cin >> back;
            if (back == 1) {
                mainMenu();
            }
            else {
                mainMenu();
            }

        }
        case 4: {
            cout << "_______________Welcome to US Airways________________\n" << endl;
            cout << "your comfort is our priority.Enjoy the journey" << endl;
            cout << "Following are the flights \n" << endl;
            cout << "1.US - 567" << endl;
            cout << "\t10-01-2023 5:00PM 22hrs Rs=37000" << endl;
            cout << "1.US- 358" << endl;
            cout << "\t15-12-2023 9:00AM 24hrs Rs=29000" << endl;
            cout << "1.US - 308" << endl;
            cout << "\t17-12-2023 11:00AM 27hrs Rs=40000" << endl;
            cout << "\n Select the flight you want to book :" << endl;
            cin >> choicel;
            if (choicel == 1) {
                charges = 37000;
                cout << "\n You have successfully booked the flight US - 567" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else if (choicel == 2) {
                charges = 29000;
                cout << "\n You have successfully booked the flight US- 358" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;

            }
            else if (choicel == 3) {
                charges = 40000;
                cout << "\n You have successfully booked the flight US - 308" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else {
                cout << "Invalid input,shiftin to the previous menu" << endl;
                flights();
            }
            cout << "press any key to go back to the main menu:" << endl;
            cin >> back;
            if (back == 1) {
                mainMenu();
            }
            else {
                mainMenu();
            }

        }
        case 5:
        {
            cout << "_______________Welcome to PIA Airline_______________\n" << endl;
            cout << "your comfort is our priority.Enjoy the journey" << endl;
            cout << "Following are the flights \n" << endl;
            cout << "1.PIA - 698" << endl;
            cout << "\t18-04-2023 9:00PM 12hrs Rs=44000" << endl;
            cout << "1.PIA- 458" << endl;
            cout << "\t23-12-2023 7:00PM 15hrs Rs=34000" << endl;
            cout << "1.PIA - 708 " << endl;
            cout << "\t25-11-2023 10:00PM 18hrs Rs=42000" << endl;
            cout << "\n Select the flight you want to book :" << endl;
            cin >> choicel;
            if (choicel == 1) {
                charges = 44000;
                cout << "\n You have successfully booked the flight PIA - 698" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else if (choicel == 2) {
                charges = 34000;
                cout << "\n You have successfully booked the flight PIA- 458" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;

            }
            else if (choicel == 3) {
                charges = 42000;
                cout << "\n You have successfully booked the flight PIA - 708" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else {
                cout << "Invalid input,shiftin to the previous menu" << endl;
                flights();
            }
            cout << "press any key to go back to the main menu:" << endl;
            cin >> back;
            if (back == 1) {
                mainMenu();
            }
            else {
                mainMenu();
            }
        }
        case 6: {
            cout << "_______________Welcome to Indian Airline________________\n" << endl;
            cout << "your comfort is our priority.Enjoy the journey" << endl;
            cout << "Following are the flights \n" << endl;
            cout << "1.AI - 398" << endl;
            cout << "\t03-08-2023 1:00PM 3hrs Rs=46000" << endl;
            cout << "1.AI - 858" << endl;
            cout << "\t11-12-2023 7:00PM 4hrhrs Rs=35000" << endl;
            cout << "1.AI - 998" << endl;
            cout << "\t03-12-2023 12:00AM 5hrs Rs=30000" << endl;
            cout << "\n Select the flight you want to book :" << endl;
            cin >> choicel;
            if (choicel == 1) {
                charges = 46000;
                cout << "\n You have successfully booked the flight AI - 398" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else if (choicel == 2) {
                charges = 35000;
                cout << "\n You have successfully booked the flight AI - 858" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;

            }
            else if (choicel == 3) {
                charges = 30000;
                cout << "\n You have successfully booked the flight AI - 998" << endl;
                cout << "You can go back to meny and take the ticket:" << endl;
            }
            else {
                cout << "Invalid input,shiftin to the previous menu" << endl;
                flights();
            }
            cout << "press any key to go back to the main menu:" << endl;
            cin >> back;
            if (back == 1) {
                mainMenu();
            }
            else {
                mainMenu();
            }
        }
        default: {
            cout << "Invalid input please , shifting to the main menu !" << endl;
            mainMenu();
            break;
        }
        }
    }

};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, public Details {
public:
    void bill() {
        // Your existing code for generating a bill remains the same
        string destination = "";
        // here ofstream class with object outf and file name is records.txt
        // in this case text file used for records of ticket class 
        ofstream outf("records.txt");
        {
            outf << "____________Kalal Airlines______________" << endl;
            outf << "______________Ticket_________________" << endl;
            outf << "_____________________________________" << endl;
            // these are static member which access with scope resolution we can acess
            outf << "customer ID :" << Details::cId << endl;
            outf << "customer Name :" << Details::name << endl;
            outf << "customer Gender :" << Details::gender << endl;
            outf << "\t description :" << endl;
            if (Registration::choice == 1) {
                destination = "Dubai";
            }
            else if (Registration::choice == 2) {
                destination = " Canada";
            }
            else if (Registration::choice == 3) {
                destination = " UK";
            }
            else if (Registration::choice == 4) {
                destination = " USA";
            }
            else if (Registration::choice == 5) {
                destination = " Pakistan";
            }
            else if (Registration::choice == 6) {
                destination = " India";
            }
            outf << "Destination \t\t" << destination << endl;
            outf << "Flight cost:\t\t" << Registration::charges << endl;


        }
        outf.close();
    }
    void save_to_csv() {
        string destination = "";

        if (Registration::choice == 1) {
            destination = "Dubai";
        }
        else if (Registration::choice == 2) {
            destination = " Canada";
        }
        else if (Registration::choice == 3) {
            destination = " UK";
        }
        else if (Registration::choice == 4) {
            destination = " USA";
        }
        else if (Registration::choice == 5) {
            destination = " Pakistan";
        }
        else if (Registration::choice == 6) {
            destination = " India";
        }

        // Check if the file "customer list.csv" exists
        ifstream checkFile("customer list.csv");
        if (checkFile.is_open()) {
            checkFile.close(); // Close the file
            file.open("customer list.csv", ios::app); // Open in append mode
        }
        else {
            file.open("customer list.csv"); // Create a new file
            file << "Customer ID" << "," << "Name" << "," << "Age " << "," << " Gender" << "," << "Destination" << "," << "Flight Cost" << endl;
        }

        for (Details detail : ALL_DETAILS) {
            cout << detail.cId << "," << detail.name << "," << detail.age << "," << detail.gender << "," << destination << "," << Registration::charges << endl;

            file << detail.cId << "," << detail.name << "," << detail.age << "," << detail.gender << "," << destination << "," << Registration::charges << endl;
        }

        file.close(); // Close the file
    }
   
    void dispBill() {
        // ifstream class used to read from the file 
        ifstream ifs("records.txt"); {
            if (!ifs) {
                cout << "File error!" << endl;
            }
            while (!ifs.eof()) {
                ifs.getline(arr, 100);
                cout << arr << endl;
            }

        }
        ifs.close();
    }
};

void mainMenu() {
    int lchoice;
    int schoice;
    int back;

    do {
        cout << "\t____________kalal airline________\n" << endl;
        cout << "\t____________ Main Menu_____________" << endl;

        cout << "\t___________________________________" << endl;
        cout << "\t\t\t\t\t\t" << endl;
        // now we make the press button :
        cout << "\t|\t press 1 to the add the customer details    \t" << endl;
        cout << "\t|\t press 2 for flight Registration            \t" << endl;
        cout << "\t|\t press 3 for ticket and charge              \t" << endl;
        cout << "\t|\t press 4 to save details to csv           \t" << endl;
        cout << "\t|\t press 5 to Exit                            \t" << endl;
        cout << "enter the choice :" << endl;
        cin >> lchoice;

        
        Details d;
        
        Registration r;
        Ticket t;

        switch (lchoice) {
        case 1: {
            cout << "____________customer_____________\n" << endl;
            d.information();
            cout << "HEYYY MCCC";
            for (Details detail : ALL_DETAILS) {
                cout << "A";
                cout << detail.cId << "," << detail.name << "," << detail.age << "," << detail.gender << "," << "destination" << "," << Registration::charges << endl;
            }

            ALL_DETAILS.push_back(d);
            cout << "press 1 to go back to Main menu";
            cin >> back;
            break;
        }
        case 2: {
            cout << "__________book a flight using this system____________\n" << endl;
            r.flights();
            break;
        }
        case 3: {
            cout << "___________Get your Ticket________\n" << endl;
            t.save_to_csv();
            cout << "Your ticket is printed, you can collect it \n" << endl;
            cout << "press 1 to display your ticket";
            cin >> back;
            if (back == 1) {
                t.dispBill();
                cout << "press any key to go back to main menu :";
                cin >> back;
            }
            break;
        }
        case 4: {
            t.save_to_csv();
            cout << "___________save details to csv________\n" << endl;
            t.bill();
            cout << "Your details are saved in csv file, you can collect it \n" << endl;
            cout << "press 1 to display your details";
            cin >> back;
            if (back == 1) {
                t.dispBill();
                cout << "press any key to go back to main menu :";
                cin >> back;
            }
            break;
        }
        case 5: {
            file.close();
            cout << "\n\n\t_________Thank-you________" << endl;
            break;
        }
        default: {
            cout << "Invalid input, please try again!\n" << endl;
        }
        }

    } while (lchoice != 5 && back == 1);
}


int main() {
    Management Mobj;
    return 0;
}




