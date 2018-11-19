/*F+F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F
  Function: validInput

  Summary:  Function gets input from user. Cleans buffer and removes
  endline. Returns true if input was the expected input type.

  Args:    template<class>
			  Variable to input into.

  Returns:  bool
			  True if input was the expected input type, false if not.
F---F---F---F---F---F---F---F---F---F---F---F---F---F---F---F---F-F*/
template<class T>
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

/**--------------------------------------------------------
* @author   Amit Botzer
* @email    botzer.2002@gmail.com
---------------------------------------------------------*/