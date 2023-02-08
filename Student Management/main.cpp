#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

class student
{
    int studentNo;
    char studentName[50];
    int homeLang = 0, firstAddLang = 0, maths = 0, physicalSci = 0, lifeSci = 0, agriSci = 0, lifeOri = 0;
    int average;

public:
    void getdata();
    void showdata() const;
    int retrollno() const;
};

unsigned calLevels(unsigned results)
{
    if (results >= 80 && results <= 100)
    {
        return 7;
    }
    else if (results >= 70 && results <= 79)
    {
        return 6;
    }
    else if (results >= 60 && results <= 69)
    {
        return 5;
    }
    else if (results >= 50 && results <= 59)
    {
        return 4;
    }
    else if (results >= 40 && results <= 49)
    {
        return 3;
    }
    else if (results >= 30 && results <= 39)
    {
        return 2;
    }
    else if (results >= 0 && results <= 29)
    {
        return 1;
    }

    return 0;
}

char calGrades(char result)
{
    if (result >= 80 && result <= 100)
    {
        return 'A';
    }
    else if (result >= 70 && result <= 79)
    {
        return 'B';
    }
    else if (result >= 60 && result <= 69)
    {
        return 'C';
    }
    else if (result >= 50 && result <= 59)
    {
        return 'D';
    }
    else if (result >= 40 && result <= 49)
    {
        return 'E';
    }
    else if (result >= 30 && result <= 39)
    {
        return 'F';
    }
    else if (result >= 0 && result <= 29)
    {
        return 'H';
    }

    return 0;
}

void student::getdata()
{
    system ("cls");
    cout << "--------------------------------------------------" << endl;
    cout << "\t   Student Personal Informaton" << endl;
    cout << "--------------------------------------------------\n"
            << endl;
    cout << "\nStudent No. : ";
    cin >> studentNo;
    cout << "\nStudent Name: ";
    cin.ignore();
    cin.getline(studentName, 50);

    cout << "\n\n===========================================================" << endl;
    cout << "\tEnter Your Marks As Per in Senior Cerficate" << endl;
    cout << "===========================================================\n"
         << endl;
    cout << "\nHome Language : ";
    cin >> homeLang;
    cout << "\nFirst Additional Language : ";
    cin >> firstAddLang;
    cout << "\nMathematics : ";
    cin >> maths;
    cout << "\nPhysical Sciences : ";
    cin >> physicalSci;
    cout << "\nLife Sciences : ";
    cin >> lifeSci;
    cout << "\nAgricultural Science : ";
    cin >> agriSci;
    cout << "\nLife Orientation : ";
    cin >> lifeOri;

    average = (homeLang + firstAddLang + maths + physicalSci + lifeSci + agriSci + lifeOri) / 7;
}

void student::showdata() const
{
    cout << "--------------------------------------------------" << endl;
    cout << "\t\tStudent Records \n"
         << endl;
    cout << "\t   " << studentName << ", " << studentNo;
    cout << "\n--------------------------------------------------\n"
         << endl;
    cout << "\n"
         << endl;
    cout << "||         Subjects            ||"
         << " Percentage (%) "
         << "||   Levels   ||   Grades   ||" << endl;
    cout << "|= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =|" << endl;
    cout << "|| Home Language               ||       " << homeLang << "       ||      " << calLevels(homeLang) << "     ||      " << calGrades(homeLang) << "     ||" << endl;
    cout << "|| First Additional Language   ||       " << firstAddLang << "       ||      " << calLevels(firstAddLang) << "     ||      " << calGrades(firstAddLang) << "     ||" << endl;
    cout << "|| Mathematics                 ||       " << maths << "       ||      " << calLevels(maths) << "     ||      " << calGrades(maths) << "     ||" << endl;
    cout << "|| Physical Sciences           ||       " << physicalSci << "       ||      " << calLevels(physicalSci) << "     ||      " << calGrades(physicalSci) << "     ||" << endl;
    cout << "|| Life Sciences               ||       " << lifeSci << "       ||      " << calLevels(lifeSci) << "     ||      " << calGrades(lifeSci) << "     ||" << endl;
    cout << "|| Agricultural Science        ||       " << agriSci << "       ||      " << calLevels(agriSci) << "     ||      " << calGrades(agriSci) << "     ||" << endl;
    cout << "|| Life Orientation            ||       " << lifeOri << "       ||      " << calLevels(lifeOri) << "     ||      " << calGrades(lifeOri) << "     ||" << endl;

    cout << "\n===============================================================================\n"
         << endl;

    cout << "Average                 : " << average << endl;
    cout << "Average Grade           : " << calGrades(average) << endl;
}

int student::retrollno() const
{
    return studentNo;
}

void createStudent();
void displayOneStudent(int);
void displayAllStudent();
void deleteStudent(int);
void changeStudent(int);

int main()
{
    char opt;
    cout << setprecision(2);

    do
    {
        char opt;
        int num;
        system("cls");
        cout << "\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * " << endl;
        cout << "\t\tStudent Report Management" << endl;
        cout << "\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n\n"
             << endl;
        cout << "1. Create Student Record\n"
             << endl;
        cout << "2. Search Student Record\n"
             << endl;
        cout << "3. View All Students Records\n"
             << endl;
        cout << "4. Delete Student Record\n"
             << endl;
        cout << "5. Modify Student Record\n"
             << endl;
        cout << "6. Exit" << endl;
        cout << "\nEnter Option : ";
        cin >> opt;
        cout << "--------------------------------------------------\n"
             << endl;
        system("cls");

        switch (opt)
        {
        case '1':
            system("cls");
            createStudent();
            break;

        case '2':
            system("cls");
            cout << "--------------------------------------------------" << endl;
            cout << "\t   Searching Student Record" << endl;
            cout << "--------------------------------------------------\n"
                 << endl;
            cout << "\n\nEnter Student Number : ";
            cin >> num;
            cout << endl;
            displayOneStudent(num);
            break;

        case '3':
            system("cls");
            displayAllStudent();
            break;

        case '4':
            system("cls");
            cout << "--------------------------------------------------" << endl;
            cout << "\t   Deleting Student Record" << endl;
            cout << "--------------------------------------------------\n"
                 << endl;
            cout << "\n\nEnter Student Number : ";
            cin >> num;
            cout << endl;
            deleteStudent(num);
            break;

        case '5':
            system("cls");
            cout << "--------------------------------------------------" << endl;
            cout << "\t   Modifying Student Record" << endl;
            cout << "--------------------------------------------------\n"
                 << endl;
            cout << "\n\nEnter Student Number : ";
            cin >> num;
            cout << endl;
            changeStudent(num);
            break;

        case '6':
            system("cls");
            cout << "\nThank You for Using Our System\n";
            exit(0);
        }
    } while (opt != '6');

    return 0;
}

void createStudent()
{
    student stud;
    ofstream oFile;
    oFile.open("student.dat", ios::binary | ios::app);
    stud.getdata();
    oFile.write(reinterpret_cast<char *>(&stud), sizeof(student));
    oFile.close();

    cout << "\n\n--------------------------------------------------" << endl;
    cout << "\tStudent Record Has Been Created" << endl;
    cout << "--------------------------------------------------\n"
         << endl;
    cout << "\nPress ENTER To Continue\n"
         << endl;
    cin.ignore();
    cin.get();
}

void displayAllStudent()
{
    student stud;
    ifstream inFile;
    inFile.open("student.dat", ios::binary);
    if (!inFile)
    {
        cout << "\n--------------------------------------------------"
             << endl;
        cout << "\tStudent File Is Empty" << endl;
        cout << "--------------------------------------------------\n"
             << endl;
        cout << "Press ENTER To EXIT\n"
             << endl;

        cin.ignore();
        cin.get();

        return;
    }
    while (inFile.read(reinterpret_cast<char *>(&stud), sizeof(student)))
    {
        stud.showdata();
        cout << "\n===============================================================================" << endl;
        cout << "Press ENTER To EXIT" << endl;
    }
    inFile.close();
    cin.ignore();
    cin.get();
}

void displayOneStudent(int n)
{
    student stud;
    ifstream iFile;
    iFile.open("student.dat", ios::binary);

    if (!iFile)
    {
        cout << "\n--------------------------------------------------" << endl;
        cout << "\tStudent File Was Not Found" << endl;
        cout << "--------------------------------------------------\n"
             << endl;
        cout << "Press ENTER To EXIT\n";
        cin.ignore();
        cin.get();

        return;
    }
    bool flag = false;
    while (iFile.read(reinterpret_cast<char *>(&stud), sizeof(student)))
    {
        if (stud.retrollno() == n)
        {
            stud.showdata();
            flag = true;
        }
    }
    iFile.close();
    if (flag == false)
    {
        cout << "\n\n--------------------------------------------------" << endl;
        cout << "\tStudent Record Was Not Found" << endl;
        cout << "--------------------------------------------------\n"
             << endl;
        cout << "Press ENTER To EXIT\n"
             << endl;
        cin.ignore();
        cin.get();
    }
}

void changeStudent(int n)
{
    bool found = false;
    student stud;
    fstream fl;
    fl.open("student.dat", ios::binary | ios::in | ios::out);

    if (!fl)
    {
        cout << "\n\n--------------------------------------------------" << endl;
        cout << "\tStudent File Was Not Found." << endl;
        cout << "--------------------------------------------------\n"
             << endl;
        cout << "Press ENTER To EXIT" << endl;
        cin.ignore();
        cin.get();

        return;
    }
    while (!fl.eof() && found == false)
    {
        fl.read(reinterpret_cast<char *>(&stud), sizeof(student));
        if (stud.retrollno() == n)
        {
            stud.showdata();
            cout << "\n\nEnter NEW Student Details  " << endl;
            stud.getdata();
            int pos = (-1) * static_cast<int>(sizeof(stud));
            fl.seekp(pos, ios::cur);
            fl.write(reinterpret_cast<char *>(&stud), sizeof(student));
            cout << "\n\n--------------------------------------------------" << endl;
            cout << "\tStudent Record Was Updated" << endl;
            cout << "--------------------------------------------------\n"
                 << endl;
            cout << "Press ENTER To Continue" << endl;
            found = true;
        }
    }
    fl.close();
    if (found == false)
    {
        cout << "\n\n--------------------------------------------------" << endl;
        cout << "\tNo Student Record Was Found " << endl;
        cout << "--------------------------------------------------\n"
             << endl;
        cout << "Press ENTER To EXIT" << endl;
        cin.ignore();
        cin.get();
    }
}

void deleteStudent(int n)
{
    student stud;
    ifstream iFile;
    iFile.open("student.dat", ios::binary);

    if (!iFile)
    {
        cout << "\n\n--------------------------------------------------" << endl;
        cout << "\tStudent File Was Not Found." << endl;
        cout << "--------------------------------------------------\n"
             << endl;
        cout << "Press ENTER To EXIT" << endl;
        cin.ignore();
        cin.get();

        return;
    }
    ofstream oFile;
    oFile.open("Temp.dat", ios::out);
    iFile.seekg(0, ios::beg);
    while (iFile.read(reinterpret_cast<char *>(&stud), sizeof(student)))
    {
        if (stud.retrollno() != n)
        {
            oFile.write(reinterpret_cast<char *>(&stud), sizeof(student));
        }
    }
    oFile.close();
    iFile.close();
    remove("student.dat");
    rename("Temp.dat", "student.dat");

    cout << "\n\n--------------------------------------------------" << endl;
    cout << "\tStudent Record Was DELETED" << endl;
    cout << "--------------------------------------------------\n"
         << endl;
    cout << "Press ENTER To Continue" << endl;
    cin.ignore();
    cin.get();
}