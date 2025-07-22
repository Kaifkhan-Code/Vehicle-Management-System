#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class car
{

    string company;
    char model[20];
    char num[12];
    char owner[10];
    char fuel[10];
    int distance;
    char state_regi[30];
    float rate;

public:
    static int total_car;
    void add_details();
    friend void show_details(car *ob);
};
class bike
{

    string company;
    char model[20];
    char num[20];
    char owner[10];
    // char fuel[10];
    int distance;
    char state_regi[30];
    float rate;

public:
    static int total_bike;
    void add_details();
    friend void show_details(bike *ob);
    friend void bike_txt(bike *ob);
};

void car::add_details()
{
    cout << "Enter company : ";
    cin >> ws;
    getline(cin, company);
    cout << "Enter Model : ";
    cin >> model;
    cout << "Enter car number : ";
    cin >> num;
    cout << "Enter ownership : ";
    cin >> owner;
    cout << "Enter fuel type : ";
    cin >> fuel;
    cout << "Enter distance travelled : ";
    cin >> distance;
    cout << "Enter state registered : ";
    cin >> state_regi;
    cout << "Enter rate : ";
    cin >> rate;
    total_car++;
}

void bike::add_details()
{
    cout << "Enter company : ";
    cin >> ws;
    getline(cin, company);
    cout << "Enter Model : ";
    cin >> model;
    cout << "Enter bike number : ";
    cin >> num;
    cout << "Enter ownership : ";
    cin >> owner;
    cout << "Enter distance travelled : ";
    cin >> distance;
    cout << "Enter state registered : ";
    cin >> state_regi;
    cout << "Enter rate : ";
    cin >> rate;
    total_bike++;
}

void show_details(car *ob)
{
    int count = 0;
    cout << "Choose company :\n";
    cout << "1.Maruti suzuki" << endl;
    cout << "2.Hyundai" << endl;
    cout << "3.Mahindra" << endl;
    cout<<"(type company name)\n";
    string s;
    cin >> ws;
    getline(cin, s);
    for (int i = 0; i < car::total_car; i++)
    {
        if (ob[i].company == s)
        {
            cout << endl
                 << "company--->" << ob[i].company << endl;
            cout << "Model--->" << ob[i].model << endl;
            cout << "Vehicle Number--->" << ob[i].num << endl;
            cout << "Owner--->" << ob[i].owner << endl;
            cout << "Fuel--->" << ob[i].fuel << endl;
            cout << "Distance driven--->" << ob[i].distance << endl;
            cout << "State registered--->" << ob[i].state_regi << endl;
            cout << "RATE --->" << ob[i].rate << endl<<endl;
            count++;
        }
    }
    if (count < 1)
        cout << "Oops !!! No details found...." << endl;
}

void show_details(bike *ob)
{
    int count = 0;
    cout << "Choose company :\n";
    cout << "1.Honda" << endl;
    cout << "2.Bajaj" << endl;
    cout << "3.Yamaha" << endl;
    cout << "(type company name)" << endl;
    string s;
    cin >> ws;
    getline(cin, s);
    for (int i = 0; i < bike::total_bike; i++)
    {

        if (ob[i].company == s)
        {
            cout << endl
                 << "company--->" << ob[i].company << endl;
            cout << "Model--->" << ob[i].model << endl;
            cout << "Vehicle Number--->" << ob[i].num << endl;
            cout << "Owner--->" << ob[i].owner << endl;
            cout << "Distance driven--->" << ob[i].distance << endl;
            cout << "State registered--->" << ob[i].state_regi << endl;
            cout << "RATE --->" << ob[i].rate << endl<<endl;;
            count++;
        }
    }
    if (count < 1)
        cout << "Oops !!! No details found...." << endl;
}


int car::total_car;
int bike::total_bike;

// main
int main()
{
    bike obj[10];
    car ob[10];

    cout << "WELCOME TO SECOND HAND VEHICLE BYE & SELL \n\n";
    while (true)
    {
        char c;
        cout << "choose : " << endl;
        cout << "1.Sell" << endl;
        cout << "2.Bye" << endl;
        cout << "3.Exit" << endl;
        cin >> c;
        if (c == '1')
        {
            while (true)
            {
                char c;
                cout << "choose :" << endl;
                cout << "1.Bike\n";
                cout << "2.Car" << endl;
                cin >> c;
                if (c == '1')
                {
                    obj[bike::total_bike].add_details();
                    break;
                }
                else if (c == '2')
                {
                    ob[car::total_car].add_details();
                    break;
                }
                else
                    cout << "Wrong input" << endl;
            }
        }
        else if (c == '2')
        {
            while (true)
            {
                char c;
                cout << "choose :" << endl;
                cout << "1.Bike\n";
                cout << "2.Car" << endl;
                cin >> c;
                if (c == '1')
                {
                    show_details(obj);
                    break;
                }
                else if (c == '2')
                {
                    show_details(ob);
                    break;
                }
                else
                    cout << "Wrong input" << endl;
            }
        }
        else if (c == '3')
        {
            break;
        }
    }
    return 0;
}