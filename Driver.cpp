/* ------------------------------------------------------
CMP2801M: Advanced Programming
Driver program for assignment 
Fall 2019

Written by Ayse Kucukyilmaz

This file is a representative test file. 
During marking, we will use the exact same notation 
as provided in the brief, so make sure
you follow that guideline. Also make sure that you don't 
change the main body provided to you here.
Otherwise, your code may not pass the test cases...

GOOD LUCK! 

------------------------------------------------------ */

#include <iostream>
#include <string>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Movable.h"


using namespace std;

// this function copies the string 'userCommand' into the newly created memory 'cstr'
void strcpy_s(char *destination, int size, const char *source);

// this function will turn: addR 100 100 50 200  into Parameter = {“addR”, “100”, “100” , “50” , “200”}
void strtok_s(vector<string>& outputVector, char* str);



int main()
{
	string userCommand;         // this holds the user input
	vector <Shape*> shapes;     // this one will hold your shapes
	vector <string> parameters; // this one will hold parameters for the commands

    int x = 0;                  // x-axis coordinate of the top left most part of the shape
    int y = 0;                  // y-axis coordinate of the top left most part of the shape



	while (userCommand.compare("exit") != 0) 
	{
		cout << "Enter the command: ";
		getline(cin, userCommand);

		char * cstr = new char[userCommand.length() + 1];

        // this function copies the string 'userCommand' into 'cstr'
        strcpy_s(cstr, userCommand.length()+1, userCommand.c_str());

		// implement a string tokenizer to populate the parameters vector
		// check function strtok_s
        strtok_s(parameters, cstr);

		// as a result of the process, parameters[0] should hold your command, followed by your parameters 
		string command = parameters[0];


		// in the following code, consider checking for the arguments.
		// in case of too few arguments, you may remind the user the correct format

		if (command.compare("addR") == 0) {
			// get parameters in the correct order
			// The following four lines have a type mismatch error
			// note that the parameters vector contains ascii values
			// HINT: toString() function converts from string to int

            int w = 0;                  // width of the shape
            int h = 0;                  // height of the shape

			x = atoi(parameters[1].c_str()); // fix me! also note that x is not previously defined :(
			y = atoi(parameters[2].c_str());
			h = atoi(parameters[3].c_str());
			w = atoi(parameters[4].c_str());

			Rectangle* r = new Rectangle(x, y, h, w);
			shapes.push_back(r);
			cout << r->toString();       /* instead of this, you may implement operator overloading and
							                use cout << r which will give you additional points */
		}
		else if (command.compare("addS") == 0) {

            // get parameters
            // ...
            x = atoi(parameters[1].c_str()); // fix me! also note that x is not previously defined :(
            y = atoi(parameters[2].c_str());
            int e = atoi(parameters[3].c_str());


			Square* s = new Square(x, y, e);
			shapes.push_back(s);
			cout << s->toString();
		}


		if (command.compare("addC") == 0) {
			// get parameters
			// ...
			Circle* c = new Circle(x, y, r);
			shapes.push_back(c);
			cout << c->toString();
			
		}
		else if (command.compare("scale") == 0) {
			// scale object at index... the scaling needs to be isotropic in case of circle and square 
			// you may want to check if the index exists or not!
			
			// Multiple inhertitance is tricky! The Shape class does nto have a scale function, the Movable does!
			// As a result all your derived classes have scale functions... 
			// You may need to use type casting wisely to use polymorphic functionality!
		}
		else if (command.compare("move") == 0) {
			// move object at index 
			int shapeNo; // read from parameters
			// you may want to check if the index exists or not!
			
			// Study the following code. A Shape object is not Movable, but all derived classes are...
			// you can't automatically type cast from a Shape to a Movable, but you can force a downcasting
			Movable *m = dynamic_cast<Movable*>(shapes[shapeNo - 1]);
			m->move(x, y);
			// scale should work similarly...

			// note that here you should see the corresponding toString output for the derived classes...
			// if toString is not a virtual function, you may see the base class functionality :(
			cout << shapes[shapeNo - 1]->toString();
		}
		else if (command.compare("display") == 0) {
			// this is not given in our example, but why don't you implement a display function which shows all objects stored in shapes?
		}


		// do any necessary postprocessing at the end of each loop...
		// yes, there is some necessary postprocessing...
		cout << endl << endl;
	}

	cout << "Press any key to continue...";
	std::getchar();

	return 0;
}


// this function copies the string 'userCommand' into the newly created memory 'cstr'
void strcpy_s(char *destination, int size, const char *source) {
    for (int i = 0; i < size ; i++ ){
        *destination++ = source[i];
    }
    *destination+= '\0';
}

// this function will turn: addR 100 100 50 200  into Parameter = {“addR”, “100”, “100” , “50” , “200”}
void strtok_s(vector<string>& outputVector, char* str)
{
    string temp;
    for(str; *str; ++str) {
        if (*str != ' ')
        {
            temp += *str;
        }
        else
        {
            outputVector.push_back(temp);
            temp = "";
        }
    }
    outputVector.push_back(temp);
}