#include <iostream>
//fstream creates, reads and writes to files
#include <fstream>
#include <string>
using namespace std;

int main() {

  //identifier for text file
  string file = "students.txt";

  // create and open a text file - 
  //note: if the file already exists it will be overwritten!
  ofstream studentInfoFile(file);

  // Write to the file - note this text will overwrite previous contents
  studentInfoFile << "Minnie,Mouse,2010,2022\n";

  // close the file after you write to it
  studentInfoFile.close();

  // If you want to append text to the end of a file instead, use the .open function
  // the second parameter is a flag that instructs that the output be added to the end of the file
  studentInfoFile.open(file, ios_base::app); 
  //text to output to file
  studentInfoFile << "Donald,Duck,2017,2023\n";
  //Add another line
  studentInfoFile << "Scrooge,McDuck,2020,2025\n";

  //always close the file!
  studentInfoFile.close();

  //string to temporarily hold output from file
  string student_info;

  // Read from the text file
  ifstream studentReadFile("students.txt");
  
  // Use a while loop together with the getline() function to read the file line by line
  while (getline (studentReadFile, student_info)) {
    // Output the text from the file
    cout << student_info << endl;
  }

  //always close the file!
  studentInfoFile.close();

  return 0;
}

