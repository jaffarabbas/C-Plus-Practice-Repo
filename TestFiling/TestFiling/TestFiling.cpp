#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
struct Person {
    int id;
    string name;
    int num;
};
vector<Person> persons;
void write_data(string data)
{
    ofstream myfile;
    myfile.open("example.csv");
    myfile << data;// "Writing this to a file.\n";
    myfile.close();
    return;
}
void readData()
{

    ifstream rfile;
    rfile.open("example.csv");
    if (!rfile)
    {
        cout << "File not open\n";
        return;
    }

    string line;
    const char delim = ',';

    while (getline(rfile, line))
    {
        istringstream ss(line);
        Person person;
        ss >> person.id; ss.ignore(10, delim);
        getline(ss, person.name, delim);
        ss >> person.num;
        if (ss)
            persons.push_back(person);
    }

}
void display_data()
{
    readData();
    for (unsigned int i = 0; i < persons.size(); i++)
        cout << setw(5) << persons[i].id
        << setw(25) << persons[i].name
        << setw(8) << persons[i].num
        << '\n';
}
void delete_data(int id)
{
    //string data;
    readData();
    ofstream myfile;
    myfile.open("example.csv");
    for (unsigned int i = 0; i < persons.size(); i++) {
        if (id == persons[i].id) {
            continue;
        }
        myfile << persons[i].id << "," << persons[i].name << "," << persons[i].num << endl;
    }

    myfile.close();
}
int main()
{
    //delete_data(5);
    display_data();
    return 0;
}