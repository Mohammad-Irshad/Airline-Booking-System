#include<iostream>
#include<fstream>
#include<iomanip> //Used for floating point values
using namespace std;

void mainMenu(); // We gonna use it throught the project that is why declare here globally

class Management{
    public:
        //Constructor
        Management(){
            mainMenu();
        }
};

class Details{

    public:

    static string name, gender;
    int phone_No;
    int age;
    string add;
    static int cID;
    char arr[100];

    void information(){
        cout<<"\nEnter the customer ID : "<<endl;
        cin>>cID;
        cout<<"Enter the name : "<<endl;
        cin>>name;
        cout<<"Enter th age : "<<endl;
        cin>>age;
        cout<<"Address : "<<endl;
        cin>>add;
        cout<<"Gender : "<<endl;
        cin>>gender;
        cout<<"Your details are saved with us \n"<<endl;
    }
};

int Details::cID;
string Details::name;
string Details::gender;

class Registration{

    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights(){
            string flightN[] = {"1) Dubai ","2) China ","3) England ","4) USA ","5) India "};
            
            for(int i =0; i<5; i++){
                cout<<"Flight to : "<<flightN[i]<<endl;
            }

            cout<<"\n Welcome to the Airlines !"<<endl;
            cout<<"Press the number of the country of which you want ot book th flight"<<endl;
            cin>>choice;

            switch(choice){
                case 1: {
                    cout<<"__________Welcome to Dubai Emirates______"<<endl;
                    cout<<"Your confort is our priority. Enjoy th journey!"<<endl;
                    cout<<"Following ar the flights \n"<<endl;

                    cout<<"1. DUB - 498"<<endl;
                    cout<<"\t08-08-2022 8:00AM 10hrs Rs. 14000"<<endl;
                    cout<<"2. DUB - 658"<<endl;
                    cout<<"\t09-08-2022 8:00AM 12hrs Rs. 10000"<<endl;
                    cout<<"3. DUB - 544"<<endl;
                    cout<<"\t10-08-2022 8:00AM 11hrs Rs. 9000"<<endl;

                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=14000;
                        cout<<"\nYou have successfully booked the flight DUB 498"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=10000;
                        cout<<"\nYou have successfully booked the flight DUB 658"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=9000;
                        cout<<"\nYou have successfully booked the flight DUB 544"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }else{
                        cout<<"Invalid input, shifting to the previous men"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main meny : "<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }

                }

                case 2: {
                    cout<<"__________Welcome to China Airlines______"<<endl;
                    cout<<"Your confort is our priority. Enjoy th journey!"<<endl;
                    cout<<"Following ar the flights \n"<<endl;

                    cout<<"1. CH - 498"<<endl;
                    cout<<"\t11-08-2022 8:00AM 10hrs Rs. 20000"<<endl;
                    cout<<"2. CH - 658"<<endl;
                    cout<<"\t13-08-2022 3:00PM 12hrs Rs. 15000"<<endl;
                    cout<<"3. CH - 544"<<endl;
                    cout<<"\t15-08-2022 6:00AM 11hrs Rs. 10000"<<endl;

                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=20000;
                        cout<<"\nYou have successfully booked the flight CH 498"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=15000;
                        cout<<"\nYou have successfully booked the flight CH 658"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=10000;
                        cout<<"\nYou have successfully booked the flight CH 544"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }else{
                        cout<<"Invalid input, shifting to the previous men"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main meny : "<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }

                }

                case 3: {
                    cout<<"__________Welcome to England Airlines______"<<endl;
                    cout<<"Your confort is our priority. Enjoy th journey!"<<endl;
                    cout<<"Following ar the flights \n"<<endl;

                    cout<<"1. EN - 498"<<endl;
                    cout<<"\t11-08-2022 8:00AM 10hrs Rs. 25000"<<endl;
                    cout<<"2. EN - 658"<<endl;
                    cout<<"\t13-08-2022 3:00PM 12hrs Rs. 15500"<<endl;
                    
                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=25000;
                        cout<<"\nYou have successfully booked the flight EN 498"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=15500;
                        cout<<"\nYou have successfully booked the flight EN 658"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous men"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main meny : "<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }

                }

                case 4: {
                    cout<<"__________Welcome to USA Airlines______"<<endl;
                    cout<<"Your confort is our priority. Enjoy th journey!"<<endl;
                    cout<<"Following ar the flights \n"<<endl;

                    cout<<"1. US - 299"<<endl;
                    cout<<"\t15-08-2022 10:00AM 10hrs Rs. 50000"<<endl;
                    

                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=50000;
                        cout<<"\nYou have successfully booked the flight US 498"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }
                    else{
                        cout<<"Invalid input, shifting to the previous men"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main meny : "<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }

                }

                case 5: {
                    cout<<"__________Welcome to Indian Airlines______"<<endl;
                    cout<<"Your confort is our priority. Enjoy th journey!"<<endl;
                    cout<<"Following ar the flights \n"<<endl;

                    cout<<"1. IN - 498"<<endl;
                    cout<<"\t21-08-2022 8:00AM 10hrs Rs. 20000"<<endl;
                    cout<<"2. IN - 658"<<endl;
                    cout<<"\t22-08-2022 8:00PM 12hrs Rs. 15000"<<endl;
                    cout<<"3. IN - 544"<<endl;
                    cout<<"\t23-08-2022 8:00AM 11hrs Rs. 10000"<<endl;

                    cout<<"\nSelect the flight you want to book : ";
                    cin>>choice1;

                    if(choice1==1){
                        charges=20000;
                        cout<<"\nYou have successfully booked the flight IN 498"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }
                    else if(choice1==2){
                        charges=15000;
                        cout<<"\nYou have successfully booked the flight IN 658"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }
                    else if(choice1==3){
                        charges=10000;
                        cout<<"\nYou have successfully booked the flight IN 544"<<endl;
                        cout<<"\nYou can go back to menu and collect the ticket"<<endl;
                    }else{
                        cout<<"Invalid input, shifting to the previous men"<<endl;
                        flights();
                    }
                    cout<<"Press any key to go back to the main meny : "<<endl;
                    cin>>back;

                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }

                }

                default : {
                    cout<<"Invalid input . Shifting you to the Main Menu !"<<endl;
                    mainMenu();
                    break;
                }
            }
        }
};

float Registration::charges;
int Registration::choice;

class ticket : public Registration, Details{
    public:

    void Bill(){
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"__________XYZ Airlines__________"<<endl;
            outf<<"__________Ticket________________"<<endl;
            outf<<"________________________________"<<endl;

            outf<<"Customer ID:"<<Details::cID<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\tDescription"<<endl<<endl;

            if(Registration::choice==1){
                destination="Dubai";
            }
            else if(Registration::choice==2){
                destination="China";
            }
            else if(Registration::choice==3){
                destination="England";
            }
            else if(Registration::choice==4){
                destination="USA";
            }
            else if(Registration::choice==5){
                destination="India";
            }

            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight cost :\t\t"<<Registration::charges<<endl;
        }
        outf.close();
    }
    void dispBill(){

        ifstream ifs("records.txt");
        {
            if(!ifs){
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof()){
                ifs.getline(arr, 100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};

void mainMenu(){
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                        XYZ\n"<<endl;
    cout<<"\t_______________________Main Menu_________"<<endl;
    cout<<"\t_________________________________________"<<endl;

    cout<<"\t|\t Press 1 to add the customer details \t"<<endl;
    cout<<"\t|\t Press 2 for flight registration \t"<<endl;
    cout<<"\t|\t Press 3 for ticket and charges \t"<<endl;
    cout<<"\t|\t Press 4 exit \t"<<endl;
    cout<<"\t_________________________________________"<<endl;
    cout<<"Enter the choice : ";
    cin>>lchoice;

    Details d;
    Registration r;
    ticket t;

    switch(lchoice){

        case 1: 
            {            
                cout<<"__________Customers__________\n"<<endl;
                d.information();
                cout<<"Press 1 to go back to main menu"<<endl;
                cin>>back;
                if(back==1){
                    mainMenu();
                }else{
                    mainMenu();
                }
                break;
            }

        case 2: 
            {
        
                cout<<"__________Book a flight using this         system__________\n"<<endl;
                r.flights();
                break;
            }
        case 3: {cout<<"_____Get Your Ticket_____\n"<<endl;
                t.Bill();

                cout<<"Your ticket is printed you can collect it \n"<<endl;
                cout<<"Press 1 to display your ticket ";

                cin>>back;
                if(back==1){
                    t.dispBill();
                    cout<<"Press any key to go back to main menu : ";
                    cin>>back;
                    if(back==1){
                        mainMenu();
                    }else{
                        mainMenu();
                    }                    
                }else{
                    mainMenu();
                }
                break;
                }

        case 4: {

                cout<<"\n\n\t______Thank - You______"<<endl;
                break;
        }

        default : {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }

    }

}

int main(){

    Management Mobj;
    return 0;
}