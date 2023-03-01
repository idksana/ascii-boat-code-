// Sana Abbasi 
// uin; 662260656
// netid; sabbas29
// project 1 building 

/*  Running the program looks like:
        Choose from among the following options:
        1. Display original graphic
        2. Exit the program
        Your choice -> 1

        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~ 
              * ~~~~~~~~~~~ |   ~~~~~~~  /|                   
          ~-~-~-~-~-~-~-~  /|           / |     *  ~~~~~~~             
         -~-~-~-~-~-~     /_|      *  -~======-~ 
            ~-~*-~-      /__|                  ~-~-~-~    
           ~-~-~-~-~  ========  ~-~-~-~   *          ~~~~~~~~
         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
           
           my ascii art drawing is lake michigan with boats 
 */

#include <iostream>   // for cin and cout
#include <iomanip>    // for setw() and setfill()
using namespace std;  // so that we don't need to preface every cin and cout with std::

int main()
{
    int menuOption = 0;
    
    cout << "Choose from among the following options:  \n"
         << "1. Display original graphic  \n"
         << "2. Display building          \n"
         << "3. Exit the program          \n"
         << "Your choice -> ";
    cin >> menuOption;
    cout << endl;

    if( menuOption == 3) {
        exit( 0);
    }
    
    else if( menuOption == 1) {

           // My own graphic.  In the next line note how setw(8) right-justifies the output character
           // (which in this case is a single blank) in a field width of 8 characters.
        cout << setw(8) << " ";
        for(int i=0; i<42; i++) {
        cout << "-";
           }
        cout << endl;
           // The backslash '\' character is a signal to the system that the next character is something
           // special.  When we want the backslash character itself to be displayed, we must put two
           // backslash characters in a row, as illustrated below.
        cout << setfill('.')
            << setw(8) << " " << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~ \n"
            << setw(8) << " " << "  *    ~~~~~~~~~~~~ |  ~~~~~~~~  /|        ~~~~~~         \n"
            << setw(8) << " " << "  ~-~-~-~-~-~-~-~  /|           / |      *              \n"
            << setw(8) << " " << " -~-~-~-~-~-~     /_|  *      -~======-~               \n"
            << setw(8) << " " << "   ~-*~-~-~      /__|                  ~-~-~-~    \n"
            << setw(8) << " " << " ~-~-~-~-~-~   ========  ~-~-~-~   *                  \n"
            << setw(8) << " " << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n"
            << endl;
                
           cout << setw(8) << " ";
           for(int i=0; i<42; i++) {
               cout << "-";
           }
           cout << endl;
    }
    else if( menuOption == 2) {
        int oop;
        cout<< "Number of building sections -> ";
        cout << endl;
        cin >> oop;
        int shifting = oop + 4; // shifting the whitespace over 
        // top tier 
        cout << setw(shifting+1) << "/\\\n"
		  << setw(shifting + 1) << "||\n"
		  << setw(shifting + 1) << "||\n"
		  << setw(shifting + 1) << "--\n"
		  << setw(shifting + 2) << "|++|\n"
		  << setw(shifting + 2) << "====\n";
        
        int length = 1;
        int width = 1;
      	shifting -= 1;
      	for (int j = 1; j <= oop; j++) { // top of the section
      		length = 1;
      		width = 1;
      		shifting -= 1; // decrement it 
      		for (width = (2 * j) - 1; width >= 0;){
      			for(int smth = 0; smth <= shifting - 2; smth++){
      				cout << " ";
      			}
      			cout << setfill(':') << "|"; // making the walls and windows
      			cout << setw(length) 
      			<< "\\" << setw(width) 
      			<< "/" << setw(length) << "|";
      			cout << endl;
      			width -= 2;
      			length++;
      		}
      		width=1; // bottom of the section
      		for (length = j; length > 0;){
      			for(int smth =0; smth  <= shifting - 2; smth++){
      				cout<<" ";
      			}
      			cout << setfill(':') << "|"; // the walls and windows
      			cout << setw(length) << "/";
      			cout << setw(width) << "\\";
      			cout << setw(length) << "|";
      			cout << endl;
      			length -= 1;
      			width += 2;
      		}
      		cout << setfill(' ') 
      		<< setw(shifting) << "/" 
      		<< setfill('-')
      		<< setw((j * 2) + 1) << "\\";
      		cout << endl;
      	}
      	cout << " "; // bottom of the tower
      	for(int j = (oop * 2) + 4; j >= 1; j--){
      		cout << ".";
      	}
      	cout << endl;
      	for(int j = (oop * 2) + 6; j >= 1; j--){
      		cout << "+";
      	}
      	cout << endl;
    }
    cout << endl;
    return 0;
}
