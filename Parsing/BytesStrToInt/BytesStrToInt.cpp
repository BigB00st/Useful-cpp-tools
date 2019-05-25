int bytesStrToInt(char * buff, int numBytes)
{
	int res = 0;
	for (int i = 0; i < numBytes; ++i)
	{
		res |= (int)buff[i] << (numBytes-i-1)*4;
	}

	return res;
}
