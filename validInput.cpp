/*F+F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F+++F
  Function: validInput

  Summary:  Function gets input from user. Cleans buffer and removes
  endline. Returns true if input was integer.

  Args:     int & input
			  Variable to input into.

  Returns:  bool
			  True if input was integer, false if not.
F---F---F---F---F---F---F---F---F---F---F---F---F---F---F---F---F-F*/
bool validInput(int & input)
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