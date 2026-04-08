compile: LL_test.cpp 
	g++  NODE.cpp LL.cpp LL_test.cpp -o inh

run: inh
	./inh


clean: inh
	rm inh