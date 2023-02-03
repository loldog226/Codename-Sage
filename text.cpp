#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string fileName;
  string fileContent;
  int choice;

  cout << "Enter the name of the file: ";
  cin >> fileName;

  while (true) {
    cout << "Enter 1 to create a new file." << endl;
    cout << "Enter 2 to edit an existing file." << endl;
    cout << "Enter 3 to save and exit." << endl;
    cin >> choice;

    switch (choice) {
      case 1: {
        cout << "Enter the content of the file: ";
        cin.ignore();
        getline(cin, fileContent);

        ofstream file(fileName);
        file << fileContent;
        file.close();

        cout << "File created." << endl;
        break;
      }

      case 2: {
        cout << "Enter the new content of the file: ";
        cin.ignore();
        getline(cin, fileContent);

        ofstream file(fileName);
        file << fileContent;
        file.close();

        cout << "File edited." << endl;
        break;
      }

      case 3: {
        cout << "Exiting..." << endl;
        return 0;
      }

      default: {
        cout << "Invalid choice." << endl;
        break;
      }
    }
  }

  return 0;
}
