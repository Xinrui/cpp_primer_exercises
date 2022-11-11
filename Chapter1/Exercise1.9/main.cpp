int main()
{
	// MSVC:
	// E0029: expected an expression
	// MSB600: "CL.exe exited with code 2"
	// C4138: '*/' found outside of comment
	// C2059: syntax error: '/'

	/* /* incorrect nest */ */
	return 0;
}