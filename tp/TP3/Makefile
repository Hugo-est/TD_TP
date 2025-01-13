CXX=g++
CXXFLAGS=-std=c++11 -Wall -Wextra

FORCE: 

%: %.cpp FORCE
	@$(CXX) $(CXXFLAGS) $< -o $@
	@echo -e '**** COMPILATION REUSSIE **** \n'
	@echo -e '********* EXECUTION ********* \n'
	@./$@
	@echo -e '\n \n ******* FIN EXECUTION *******'

clean:
	rm -f *.o *~ core 




