#include <iostream>
using namespace std;

// Yahan py hum ny string type ki 5 arrays li student ka data store karwany ky liye
string arr1[20] /*array ki deafault value hum ny 20 rakhi*/, arr2[20], arr3[20], arr4[20], arr5[20];
int total = 0; // we get total variable to show some whole data
// Call the functions in globely

void enter()
{

    int choice;
    cout << " How many students you want to enter : " << endl; // As many student as we want to admit
    cin >> choice;
    if (total == 0)
    { // We add the total amount of the students in choice So, that the data continues to be entered
        total = total + choice;
        for (int i = 0; i < choice; i++) // We run the loop so that as many children as we take, their data will
        {                                //-- be created in a sequence _
            cout << "\n\n Enter Data of student : " << i + 1 << endl;
            cout << " Enter Name          : ";
            cin >> arr1[i];
            cout << " Enter Roll Number   : ";
            cin >> arr2[i];
            cout << " Enter Courses       : "; // [We have taken all his details from the user]
            cin >> arr3[i];
            cout << " Enter Class         : ";
            cin >> arr4[i];
            cout << " Enter Contact       : ";
            cin >> arr5[i];
        }
    }
    else
    {
        for (int i = total; i < total + choice; i++) // We run the loop so that as many children as we take, their data will
        {                                            //-- be created in a sequence _
            cout << "\n\n Enter Data of student : " << i + 1 << endl;
            cout << " Enter Name          : ";
            cin >> arr1[i];
            cout << " Enter Roll Number   : ";
            cin >> arr2[i];
            cout << " Enter Courses       : "; // [We have taken all his details from the user]
            cin >> arr3[i];
            cout << " Enter Class         : ";
            cin >> arr4[i];
            cout << " Enter Contact       : ";
            cin >> arr5[i];
        }
        total = total + choice;
    }
}
void show()
{
    for (int i = 0; i < total; i++)
    {
        cout << " Enter the total data of students : " << i + 1 << endl;
        cout << "\n";
        cout << " Enter Name  : " << arr1[i] << endl;
        cout << " Enter Roll Number : " << arr2[i] << endl;
        cout << " Enter Course: " << arr3[i] << endl;
        cout << " Enter Class : " << arr4[i] << endl;
        cout << " Enter Contact : " << arr5[i] << endl;
    }
}
void search()
{
    string rollno;
    cout << "\n\t\t*****Enter the Roll No of student which you want search it*****  " << endl;
    cin >> rollno;
    for (int i = 0; i < total; i++)
    {
        if (rollno == arr2[i])
        {
            cout << " Enter the total data of students : " << i + 1 << endl;
            cout << " Enter Name  : " << arr1[i] << endl;
            cout << " Enter Roll Number : " << arr2[i] << endl;
            cout << " Enter Course: " << arr3[i] << endl;
            cout << " Enter Class : " << arr4[i] << endl;
            cout << " Enter Contact : " << arr5[i] << endl;
        }
    }
}
void update()
{
    string rollno;
    cout << "\n\t\t*****Enter the Roll No of student which you want Update it*****  " << endl;
    cin >> rollno;
    for (int i = 0; i < total; i++)
    {
        if (rollno == arr2[i])
        {
            cout << "\n\t\t****Previous Data**** " << endl;
            cout << " Enter the total data of students : " << i + 1 << endl;
            cout << " Enter Name  : " << arr1[i] << endl;
            cout << " Enter Roll Number : " << arr2[i] << endl;
            cout << " Enter Course: " << arr3[i] << endl;
            cout << " Enter Class : " << arr4[i] << endl;
            cout << " Enter Contact : " << arr5[i] << endl;
            cout << "\n\t\t****Enter New Data**** " << endl;
            cout << " Enter Name          : ";
            cin >> arr1[i];
            cout << " Enter Roll Number   : ";
            cin >> arr2[i];
            cout << " Enter Courses       : ";
            cin >> arr3[i];
            cout << " Enter Class         : ";
            cin >> arr4[i];
            cout << " Enter Contact       : ";
            cin >> arr5[i];
        }
    }
}
void deleterecord()
{

    int a;
    cout << "\n\t\t*****Enter 1 to delete the full record***** " << endl;
    cout << "\n\t\t*****Enter 2 to delete specific record***** " << endl;
    cin >> a;
    if (a == 1)
    {
        total = 0;
        cout << " \n\t\t *****All record is deleted*****" << endl;
    }
    else
        (a == 2);
    {
        string rollno;

        cout << "\n\t\t***** Enter the roll no you want to delete it***** " << endl;
        cin >> rollno;
        for (int i = 0; i < total; i++)
        {
            if (rollno == arr2[i])
            {
                for (int j = i; j < total; j++)
                {
                    arr1[j] = arr1[j + 1];
                    arr2[j] = arr2[j + 1];
                    arr3[j] = arr3[j + 1];
                    arr4[j] = arr4[j + 1];
                    arr5[j] = arr5[j + 1];
                }
                total--;
                cout << "\n\t\t*****Your required record is deleted*****" << endl;
            }
        }
    }
}
void exit()
{
}

int main()
{
    while (true)
    {

        int value;

        cout << "\n\n\t\t*********  School Management System  *********" << endl;
        cout << "\n\n";

        cout << " i)  Press 1 to Enter Data     :\n "; // We given data to user
        cout << "ii)  Press 2 to Show Data     :\n ";
        cout << "iii) Press 3 to Search Data   :\n ";
        cout << "iv)  Press 4 to Update Data   :\n ";
        cout << "v)   Press 5 to Delete Data   :\n ";
        cout << "vi)  Press 6 to exit Data     :\n ";
        cin >> value;
        switch (value)
        {
        case 1:
            enter(); // Functions in Switch cases
            break;
        case 2:
            show();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            deleterecord();
            break;
        case 6:
            exit();
            break;
        default:
            cout << " Invalid Value " << endl;
            break;
        }
    }
    return 0;
}