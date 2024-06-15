#include <iostream>
using namespace std;

int main()
{

    cout << "\t\t********Sky Way's Restaurant********* " << endl;

    // HOTEL MANAGAEMENT SYSTEM PROJECT

    int quant;
    int choice;

    // And those variables declared for stored the quantity of hotel room and items
    int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;

    // So, now we will declared the those variables which will hold the value of sold items
    int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;

    // Now will cleared some more variables that will contains the price of each food items and rooms
    int total_rooms = 0, total_pasta = 0, total_burger = 0, total_noodles = 0, total_shake = 0, total_chicken = 0;

    cout << "\n\n\t\t***** Quantity of items we have in hotel*****  ";
    cout << "\nAvailable Rooms       : ";
    cin >> Qrooms;
    cout << "\nQuantity Of Pasta     : ";
    cin >> Qpasta;
    cout << "\nQuantity of Burgers   : ";
    cin >> Qburger;
    cout << "\nQuantity of Noodles   : ";
    cin >> Qnoodles;
    cout << "\nQuantity of Shake     : ";
    cin >> Qshake;
    cout << "\nQuantity of Chicken   : ";
    cin >> Qchicken;

// Now we have create to a menu to select all the items in hotel we have
m:
    cout << "\n\n\t\t******Please Select From The Menu Options******  ";
    cout << "\n1) : Rooms                : ";
    cout << "\n2) : Pasta                : ";
    cout << "\n3) : Burger               : ";
    cout << "\n4) : Noodles              : ";
    cout << "\n5) : Shake                : ";
    cout << "\n6) : Chicken              : ";
    cout << "\n7) : Information Regarding Sales and Collections  ";
    cout << "\n8) : Exit                 : ";

    // Now we will add a variable "Choice" to choose any item in list
    cout << "\n\n\t\t******Please Select Your Choice******";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "\n\n\t\t*****Please Enter the Room/Rooms You Want *****";
        cin >> quant;
        if (Qrooms - Srooms >= quant)
        {
            Srooms = Srooms + quant;
            total_rooms = total_rooms + quant * 1200;
            cout << "\n\n\t" << quant << "\t****rooms/room have been alloted to you****";
        }
        else

            cout << "\n\n\t****Only " << Qrooms - Srooms << "\t\t\tremaining rooms in hotel **** ";

        break;

    case 2:
        cout << "\n\n\t\t****Please Enter Pasta Quantity ****";
        cin >> quant;
        if (Qpasta - Spasta >= quant)
        {
            Spasta = Spasta + quant;
            total_pasta = total_pasta + quant * 500;
            cout << "\n\n\t" << quant << "\t **** Pasta is the Order! ****";
        }
        else

            cout << "\n\n\t****Only " << Qpasta - Spasta << "\t ****Pasta remaining  in hotel **** ";

        break;

    case 3:
        cout << "\n\n\t\t****Please Enter Burger Quantity ****";
        cin >> quant;
        if (Qburger - Sburger >= quant)
        {
            Sburger = Sburger + quant;
            total_burger = total_burger + quant * 450;
            cout << "\n\n\t" << quant << "\t **** Burger is the Order! ****";
        }
        else

            cout << "\n\n\t****Only " << Qburger - Sburger << "\t****Burger remaining  in hotel **** ";

        break;

    case 4:
        cout << "\n\n\t\t****Please Enter Noodles Quantity ****";
        cin >> quant;
        if (Qnoodles - Snoodles >= quant)
        {
            Snoodles = Snoodles + quant;
            total_noodles = total_noodles + quant * 400;
            cout << "\n\n\t" << quant << "\t**** Noodles is the Order! ****";
        }
        else

            cout << "\n\n\t\t****Only " << Qnoodles - Snoodles << "\t\t\t ****noodles remaining  in hotel **** ";

        break;

    case 5:
        cout << "\n\n\t\t****Please Enter Shake  Quantity ****";
        cin >> quant;
        if (Qshake - Sshake >= quant)
        {
            Sshake = Sshake + quant;
            total_shake = total_shake + quant * 350;
            cout << "\n\n\t" << quant << "\t **** Shake is the Order! ****";
        }
        else

            cout << "\n\n\t\t****Only " << Qshake - Sshake << "\t\t\t ****Shake remaining  in hotel **** ";

        break;

    case 6:
        cout << "\n\n\t\t****Please Enter chicken Roll Quantity ****";
        cin >> quant;
        if (Qchicken - Schicken >= quant)
        {
            Schicken = Schicken + quant;
            total_chicken = total_chicken + quant * 300;
            cout << "\n\n\t" << quant << "\t **** Chicken Roll is the Order! ****";
        }
        else

            cout << "\n\n\t\t****Only " << Qchicken - Schicken << "\t\t\t ****Chicken Roll remaining  in hotel **** ";

        break;

    case 7:
        cout << "\n\n\t\t****Details of Sales and Collections**** ";
        cout << "\nNumbers of rooms we had                : " << Qrooms;
        cout << "\nNumbers of rooms we gave for rent      : " << Srooms;
        cout << "\nRemaining rooms                        : " << Qrooms - Srooms;
        cout << "\nTotal rooms collection for the day     : " << total_rooms;

        cout << "\n\n Number of Pasta we had              : " << Qpasta;
        cout << "\n Number of Pasta sold                  : " << Spasta;
        cout << "\n Remaining Pasta                       : " << Qpasta - Spasta;
        cout << "\n Total Pasta collection for the day    : " << total_pasta;

        cout << "\n\n Number of Burgers we had            : " << Qburger;
        cout << "\n Number of Burgers sold                : " << Sburger;
        cout << "\n Remaining Burgers                     : " << Qburger - Sburger;
        cout << "\n Total Burger collection for the day   : " << total_burger;

        cout << "\n\n Number of Noodles we had            : " << Qnoodles;
        cout << "\n Number of Noodles sold                : " << Snoodles;
        cout << "\n Remaining Noodles                     : " << Qnoodles - Snoodles;
        cout << "\n Total Noodles collection for the day  : " << total_noodles;

        cout << "\n\n Number of Shake we had              : " << Qshake;
        cout << "\n Number of Shake sold                  : " << Sshake;
        cout << "\n Remaining Shake                       : " << Qshake - Sshake;
        cout << "\n Total Shake collection for the day    : " << total_shake;

        cout << "\n\n Number of Chicken Roll we had       : " << Qchicken;
        cout << "\n Number of Chicken Rollsold            : " << Schicken;
        cout << "\n Remaining Chicken Roll                : " << Qchicken - Schicken;
        cout << "\n Total Chicken collection for the day  : " << total_chicken;

    case 8:
        exit(0);

    default:
        cout << "\n\n\t\t ******Please enter the right Number that we have mentioned in list *****";
    }
    goto m;
    return 0;
}