# airline-management-system01
Libraries Used:

iostream: Used for standard input and output operations. fstream: Used for file input and output operations. iomanip: Used for formatting output. string: Used for string manipulation. vector: Used to manage a collection of customer details. Classes Defined:

Management: Contains the main function to initiate the program. Details: Manages customer details such as name, gender, age, and customer ID. Registration: Handles the flight registration process and flight choices. Ticket: Inherits from Registration and Details to generate bills, save details to CSV, and display tickets. Data Structures:

vector

Details
ALL_DETAILS: Stores customer details in a vector. File Handling:
Input and output operations are performed using the ifstream and ofstream classes. A CSV file ("customer list.csv") is created and updated to store customer details. User Interaction:

The program presents a menu (mainMenu()) allowing users to: Add customer details. Register for a flight. Generate and display tickets. Save details to a CSV file. Exit the program. Loops and Control Flow:

The program uses do-while loops to keep the menu running until the user chooses to exit. switch statements are used to handle different user choices. Modularization:

The code is organized into classes (Details, Registration, Ticket) to encapsulate related functionalities. Functions such as mainMenu(), bill(), save_to_csv(), and others are defined for specific tasks. Error Handling:

Some basic error handling is implemented, such as checking if a file exists before opening it. Static Members:

Static members in the Details and Registration classes are used to share common data among instances. Note: It's worth mentioning that the usage of void main() is not standard C++ and is generally recommended to use int main() instead. Also, be cautious about using eof() in the while loop for file reading, as it might lead to unexpected behavior
