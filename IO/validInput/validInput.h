#include <iostream>

/**--------------------------------------------------------
* @author   Amit Botzer
* @email    botzer.2002@gmail.com
---------------------------------------------------------*/

/*F+F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F
  Function: validInput

  Summary:  Function gets input from user. Cleans buffer and removes
			endline. Returns true if input was the expected input type.

  Args:    <typename> input
			  Reference of variable to input into.

  Returns:  bool
			  True if input was the expected input type, false if not.

  Note: typename must be input-able by std::cin
F---F---F---F---F---F---F---F---F---F---F---F---F---F---F---F---F-F*/
template<typename T>
bool validInput(T & input)
{
	bool valid = false;
	std::cin >> input;
	valid = (bool)(std::cin);

	//clean buffer
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');

	return valid;
}


/*F+F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F
  Function: validInput

  Summary:  Function clears screen, prints given message, gets 
			valid input from user, returns it.

  Args:    const char * msg
			  Message to print each loop
		   <typename> min
			  Minimum acceptable input
		   <typename> max
			  Maximum acceptable input

  Returns:  <typename> input
			  The input of the user regarding the printed message
  
  Note:  typename must support operator: <, >
F---F---F---F---F---F---F---F---F---F---F---F---F---F---F---F---F-F*/
template<typename T>
T printAndGetInput(const char * msg, const T & min, const T & max)
{
	T input = 0;
	bool valid = false;
	do
	{
		system("cls");
		std::cout << msg;
		valid = validInput(input);
	} while (!valid || input < min || input > max);

	return input;
}
