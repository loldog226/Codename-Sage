#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

using namespace std;

// function to create a file
void create_file() {
  string filename;
  cout << "Enter the name of the file: ";
  cin >> filename;
  filename = filename + ".txt";
  ofstream file;
  file.open(filename);
  if (!file) {
    cout << "File creation failed" << endl;
    return;
  }
  cout << "File created successfully" << endl;
  file.close();
}

// function to view the contents of a file
void view_file() {
  string filename;
  cout << "Enter the name of the file: ";
  cin >> filename;
  filename = filename + ".txt";
  ifstream file;
  file.open(filename);
  if (!file) {
    cout << "File not found" << endl;
    return;
  }
  cout << "Contents of the file: " << endl;
  string line;
  while (getline(file, line)) {
    cout << line << endl;
  }
  file.close();
}

// function to delete a file
void delete_file() {
  string filename;
  cout << "Enter the name of the file: ";
  cin >> filename;
  filename = filename + ".txt";
  if (remove(filename.c_str()) != 0) {
    cout << "File deletion failed" << endl;
    return;
  }
  cout << "File deleted successfully" << endl;
}

// main function
int main() {
  int choice;
  cout << "1. Create file" << endl;
  cout << "2. View file" << endl;
  cout << "3. Delete file" << endl;
  cout << "Enter your choice: ";
  cin >> choice;
  switch (choice) {
    case 1:
      create_file();
      break;
    case 2:
      view_file();
      break;
    case 3:
      delete_file();
      break;
    default:
      cout << "Invalid choice" << endl;
  }
  return 0;
}
