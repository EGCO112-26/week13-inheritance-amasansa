all: inh

inh: NODE.cpp LL.cpp LL_test.cpp
	g++ NODE.cpp LL.cpp LL_test.cpp -o inh

clean:
	rm -f inh