A+BProblem1000.exe: A+BProblem1000.cc
	g++ -o A+BProblem1000.exe A+BProblem1000.cc
	
FinancialManagemaent1004.exe: FinancialManagemaent1004.cc
	g++ -o FinancialManagemaent1004.exe FinancialManagemaent1004.cc
	
Hangover1003.exe: Hangover1003.cc
	g++ -o Hangover1003.exe Hangover1003.cc

IthinkIneedahouse1005.exe: IthinkIneedahouse1005.cc
	g++ -o IthinkIneedahouse1005.exe IthinkIneedahouse1005.cc
clean:
	rm *.exe
